# Open4DBoxing

Open4DBoxing is an unofficial reconstruction of *4D Sports Boxing* (Distinctive Software, DOS, 1991).

It is written in C and rebuilt from the original program, the way [SDLPoP2](https://github.com/ToolAssisted-run/SDLPoP2) was for Prince of Persia 2 and [OpenSamurai](https://github.com/ToolAssisted-run/OpenSamurai) for Sword of the Samurai. It plays the original game's data files, so you need your own copy of the game.

The project has just started: see [docs/FINDINGS.md](docs/FINDINGS.md) for what is known about the original program so far.

## Building

```
meson setup build
meson compile -C build
meson test -C build
```

## Where things are

| Path | What |
|---|---|
| `source/` | the reconstructed game |
| `tests/` | test programs |
| `tools/unpklite.py` | unpacks the PKLITE-compressed original executables (for analysis; the game does not need it) |
| `docs/FINDINGS.md` | everything found about the original program |

## License

Open4DBoxing is free software under the GPL-3.0-or-later (see [LICENSE](LICENSE)). It is an unofficial project, not affiliated with Distinctive Software, Mindscape or Electronic Arts. It contains no game data: you need your own copy of 4D Sports Boxing.
