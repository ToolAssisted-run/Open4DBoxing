# Test programs. The ones that need the game's files are registered only with -DgameDir; the oracle comparisons
# (screens against DOSBox-X's, captured in the workspace) only with -DoracleDir.
versiontest = executable('versiontest', 'versiontest.c', dependencies : open4dboxingDependency, c_args : commonCompileArgs)
test('version', versiontest)
boxrun = executable('boxrun', 'boxrun.c', dependencies : open4dboxingDependency, c_args : commonCompileArgs)
if get_option('gameDir') != '' and get_option('oracleDir') != ''
  # the MCGA build's scenarios, and the other builds' intros (the oracle as an EGA, a CGA and a Tandy machine)
  oracleScenarios = { 'intro' : [ 'intro', 'w_boot_BOXU', '' ], 'fight' : [ 'fight', 'w_fight3', '' ],
                      'intro-ega' : [ 'intro-ega', 'w_lapse_ega', '4DBEGA.EXE' ],
                      'intro-cga' : [ 'intro-cga', 'w_lapse_cga', '4DBCGA.EXE' ],
                      'intro-tandy' : [ 'intro-tandy', 'w_lapse_tandy', '4DBTDY.EXE' ] }
  foreach name, what : oracleScenarios
    test('oracle-' + name, find_program('oracletest.sh'),
      args : [ boxrun.full_path(), meson.project_source_root() / 'tools' / 'mkscript.py', get_option('gameDir'),
               meson.current_source_dir() / 'oracle' / (what[0] + '.plan'), get_option('oracleDir') / what[1], what[2] ],
      depends : boxrun, timeout : 1800)
  endforeach
endif
if get_option('gameDir') != ''
  # fights run headless with a cheat on and its log of landed punches checked (tests/fighttest.sh): the two cheats
  # (the player's boxer driven by the game's AI), and the joystick (the game port emulated: the player's punches
  # on the stick and its second button)
  fightScenarios = { 'cheat-one-punch' : [ 'cheats.plan', 'one_blow_kills', 'player', '0' ],
                     'cheat-invulnerable' : [ 'cheats.plan', 'invulnerable', 'opponent', '16384' ],
                     'joystick' : [ 'joystick.plan', 'invulnerable', 'player', 'any' ] }
  foreach name, what : fightScenarios
    test(name, find_program('fighttest.sh'),
      args : [ boxrun.full_path(), meson.project_source_root() / 'tools' / 'mkscript.py', get_option('gameDir'),
               meson.current_source_dir() / what[0], what[1], what[2], what[3] ],
      depends : boxrun, timeout : 1800)
  endforeach
endif
if sdl2Dependency.found()
  menudump = executable('menudump', 'menudump.c', '../frontend/overlay_menu.c', '../frontend/settings.c', '../frontend/text.c',
    dependencies : [ open4dboxingDependency, sdl2Dependency ], c_args : commonCompileArgs)
endif
