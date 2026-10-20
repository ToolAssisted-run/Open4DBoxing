# The reconstructed game as one library, linked whole so that routines a test or the frontend replaces
# (weak defaults) behave as if every source were compiled into the program.
open4dboxingSources = files(
  'asm2c.c', 'box_core.c', 'dos.c', 'drv_ad15.c', 'drv_mt15.c', 'drv_pc15.c', 'drv_sb15.c', 'drv_td15.c', 'mpu401.c', 'opl.c', 'sb.c', 'tandy.c', 'dosmem.c', 'exe.c', 'game.c', 'pit.c', 'version.c',
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
