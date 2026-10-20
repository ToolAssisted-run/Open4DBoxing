#!/bin/bash
# build-bundle.sh --platform linux|windows --out DIR: build Open4DBoxing for the platform and put what a user downloads
# in DIR, flat (the files unpack straight into the game's folder): the executable, README.md, LICENSE, the licenses of
# what is built in, and BUILD.txt (the commit and the toolchain). CI and the releases use it (.github/workflows); it
# needs meson, ninja and a C compiler and, for Windows, mingw-w64.
#   linux:   SDL2 built in from the WrapDB wrap (--force-fallback-for=sdl2), statically: the executable needs only the
#            C library (SDL loads X11 / Wayland / ALSA / PulseAudio at run time)
#   windows: cross-compiled with tools/x86_64-w64-mingw32.ini against SDL2's MinGW release (libsdl.org's, its checksum
#            checked, fetched into ~/.cache/open4dboxing the first time), everything static: one .exe
set -e
platform=; out=
while [ $# -gt 0 ]; do
	case $1 in
	--platform) platform=$2; shift 2 ;;
	--out) out=$2; shift 2 ;;
	*) echo "build-bundle.sh: unknown argument $1" >&2; exit 2 ;;
	esac
done
[ "$platform" = linux ] || [ "$platform" = windows ] || { echo "usage: build-bundle.sh --platform linux|windows --out DIR" >&2; exit 2; }
[ -n "$out" ] || { echo "build-bundle.sh: --out DIR is required" >&2; exit 2; }
out=$(mkdir -p "$out" && cd "$out" && pwd)
root=$(cd "$(dirname "$0")/.." && pwd); cd "$root"
build=build-bundle-$platform
if [ "$platform" = linux ]; then
	[ -f $build/build.ninja ] || meson setup $build --buildtype=release --force-fallback-for=sdl2
	meson compile -C $build
	exe=$build/frontend/open4dboxing; cc=$(cc --version | head -1)
	if ldd "$exe" | grep -vE "linux-vdso|libc\.so|libm\.so|ld-linux"; then echo "build-bundle.sh: unexpected shared library dependency" >&2; exit 1; fi
	sdlVersion="$(sed -n 's/^directory = SDL2-//p' extern/sdl2.wrap) (WrapDB, static)"
	sdlLicense=$(ls -d extern/SDL2-*/ | head -1)LICENSE.txt
else
	sdl=2.30.12
	sdlSha=dddafbf0705a8cbe1f97c69680886ce147ed4d38f1d04e03523681298e081b0f
	cache=${XDG_CACHE_HOME:-$HOME/.cache}/open4dboxing
	mkdir -p "$cache"
	if [ ! -d "$cache/SDL2-$sdl" ]; then
		curl -sfL -o "$cache/SDL2-devel-$sdl-mingw.tar.gz" "https://github.com/libsdl-org/SDL/releases/download/release-$sdl/SDL2-devel-$sdl-mingw.tar.gz"
		echo "$sdlSha  $cache/SDL2-devel-$sdl-mingw.tar.gz" | sha256sum -c --quiet
		tar -C "$cache" -xzf "$cache/SDL2-devel-$sdl-mingw.tar.gz"
	fi
	sdlDir=$cache/SDL2-$sdl/x86_64-w64-mingw32
	mkdir -p "$cache/pkgconfig"
	sed "s|^prefix=.*|prefix=$sdlDir|" "$sdlDir/lib/pkgconfig/sdl2.pc" > "$cache/pkgconfig/sdl2.pc"
	[ -f $build/build.ninja ] || meson setup $build --buildtype=release --cross-file tools/x86_64-w64-mingw32.ini \
		-DbuildTests=false -Dpkg_config_path="$cache/pkgconfig"
	ninja -C $build frontend/open4dboxing.exe
	exe=$build/frontend/open4dboxing.exe; cc=$(x86_64-w64-mingw32-gcc --version | head -1)
	sdlVersion="$sdl (libsdl.org's MinGW release, static)"
	sdlLicense=$cache/SDL2-$sdl/LICENSE.txt
fi
rm -rf "$out"; mkdir -p "$out/licenses"
cp "$exe" README.md "$out/"
cp "$sdlLicense" "$out/licenses/SDL2-LICENSE.txt"
if [ "$platform" = windows ]; then
	x86_64-w64-mingw32-strip "$out/open4dboxing.exe"
	cp LICENSE "$out/LICENSE.txt"
else
	strip "$out/open4dboxing"
	cp LICENSE "$out/"
fi
{
	echo "Open4DBoxing ($platform x86-64)"
	echo "commit:   $(git rev-parse HEAD 2>/dev/null || echo unknown)"
	echo "date:     $(git log -1 --format=%cd --date=iso-strict 2>/dev/null || echo unknown)"
	echo "compiler: $cc"
	echo "meson:    $(meson --version)"
	echo "SDL2:     $sdlVersion"
} > "$out/BUILD.txt"
ls -la "$out"
