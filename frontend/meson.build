# The game in a window (SDL2): the system's, or built in from the WrapDB wrap (extern/sdl2.wrap)
windows = host_machine.system() == 'windows'
sdl2Options = [ 'default_library=static', 'use_video_offscreen=enabled', 'test=false' ]   # (offscreen: headless runs)
if windows
  sdl2Dependency = dependency('sdl2', required : false, static : true, default_options : sdl2Options)
else
  sdl2Dependency = dependency('sdl2', required : false, default_options : sdl2Options)
endif
if sdl2Dependency.found()
  executable('open4dboxing',
    'main.c', 'overlay_menu.c', 'settings.c', 'text.c',
    c_args : commonCompileArgs,
    dependencies : [ open4dboxingDependency, sdl2Dependency ],
    link_args : windows ? [ '-static' ] : [],
    win_subsystem : windows ? 'windows' : 'console',
    install : true,
  )
endif
