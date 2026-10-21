# The reconstructed game as one library, linked whole so that routines a test or the frontend replaces
# (weak defaults) behave as if every source were compiled into the program.
open4dboxingSources = files(
  'asm2c.c', 'box_core.c', 'ega_core.c', 'cga_core.c', 'tdy_core.c', 'vga.c', 'cheats.c', 'dos.c', 'drv_ad15.c', 'drv_mt15.c', 'drv_pc15.c', 'drv_sb15.c', 'drv_td15.c', 'mpu401.c', 'opl.c', 'sb.c', 'tandy.c', 'dosmem.c', 'disks.c', 'exe.c', 'game.c', 'pit.c', 'replay.c', 'dosboot.c', 'version.c',
)

open4dboxingIncludes = include_directories('.')

open4dboxingLib = static_library('open4dboxing', open4dboxingSources,
  c_args : commonCompileArgs,
  include_directories : open4dboxingIncludes,
)

open4dboxingDependency = declare_dependency(
  link_whole : open4dboxingLib,
  include_directories : open4dboxingIncludes,
)

# The replay variant (-Dreplay=true): the same sources with ASM_REPLAY, the per-instruction hook counting the
# program's instructions and taking a DOSBox-X oracle's interrupts, port reads and service answers from its log
# (replay.h): tests/boxrun built with it runs a scenario in lockstep with the oracle's run of it
if get_option('replay')
  open4dboxingReplayLib = static_library('open4dboxing_replay', open4dboxingSources,
    c_args : commonCompileArgs + [ '-DASM_REPLAY=1' ],
    include_directories : open4dboxingIncludes,
  )
  open4dboxingReplayDependency = declare_dependency(
    link_whole : open4dboxingReplayLib,
    include_directories : open4dboxingIncludes,
    compile_args : [ '-DASM_REPLAY=1' ],
  )
endif
