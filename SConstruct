import glob
import subprocess

AddOption('--release', action='store_true', default=False, dest='build_release')

env = Environment(
    CCFLAGS='-std=c++11',
    CPPPATH=['src'],
    )

if GetOption('build_release'):
    env.Append(CCFLAGS=' -O2')  # Note: there's a space at the start of ' -02'.
else:
    dev_flags = ['-g', '-Werror', '-Wall', '-Wextra', '-pthread',
                 '-Wdisabled-optimization', '-Wold-style-cast', '-Wcast-qual',
                 '-Wlogical-op', '-Wredundant-decls', '-Wshadow',
                 '-Wsign-conversion', '-Wsign-promo', '-fno-inline']
    for i in dev_flags:
        env.Append(CCFLAGS=' ' + i)

# Build main
main_build = env.Program('build/main', Glob('src/*.cpp'))
