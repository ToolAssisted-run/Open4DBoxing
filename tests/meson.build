# Test programs. The ones that need the game's files are registered only with -DgameDir; the oracle comparisons
# (screens against DOSBox-X's, captured in the workspace) only with -DoracleDir.
versiontest = executable('versiontest', 'versiontest.c', dependencies : open4dboxingDependency, c_args : commonCompileArgs)
test('version', versiontest)
boxrun = executable('boxrun', 'boxrun.c', dependencies : open4dboxingDependency, c_args : commonCompileArgs)
if get_option('gameDir') != '' and get_option('oracleDir') != ''
  oracleScenarios = { 'intro' : 'w_boot_BOXU', 'fight' : 'w_fight3' }
  foreach name, dir : oracleScenarios
    test('oracle-' + name, find_program('oracletest.sh'),
      args : [ boxrun.full_path(), meson.project_source_root() / 'tools' / 'mkscript.py', get_option('gameDir'),
               meson.current_source_dir() / 'oracle' / (name + '.plan'), get_option('oracleDir') / dir ],
      depends : boxrun, timeout : 1800)
  endforeach
endif
