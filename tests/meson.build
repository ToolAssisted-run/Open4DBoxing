# Test programs. The ones that need the game's files are registered only with -DgameDir.
versiontest = executable('versiontest', 'versiontest.c', dependencies : open4dboxingDependency, c_args : commonCompileArgs)
test('version', versiontest)
boxrun = executable('boxrun', 'boxrun.c', dependencies : open4dboxingDependency, c_args : commonCompileArgs)
