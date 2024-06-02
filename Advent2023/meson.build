project(
    'advent',
    'cpp',
    version: run_command('poetry', 'version', '--short', check: true).stdout(),
    default_options: [
        'cpp_std=c++20',
        'b_ndebug=if-release',  # disables asserts in release builds
        'b_lto=true',  # sets -flto
        'werror=true',  # sets -Werror
        'warning_level=3',  # level 3 sets -Wextra and -Wpedantic
    ]
)

if get_option('buildtype') == 'debug'
    compiler = meson.get_compiler('cpp')

    if compiler.has_argument('-fprofile-abs-path')
        # clang does not have this particular flag, so we only add it when
        # compiling with gcc. It's helpful in determining code coverage.
        add_project_arguments('-fprofile-abs-path', language: 'cpp')
    endif

    add_project_arguments('--coverage', language: 'cpp')
    add_project_link_arguments('--coverage', language: 'cpp')
endif


# We first compile a common library that contains all regular, C++ code. This
# is then linked against by the extension modules. We also define source and
# installation directories here, as a shorthand.
INST_DIR = 'advent'
SRC_DIR = 'advent' / 'cpp'
INCLUDES = include_directories(SRC_DIR)

libcommon = static_library(
    'common',
    [
        SRC_DIR / 'day1' / 'day1.cpp',
        SRC_DIR / 'ProblemData.cpp',

    ],
    include_directories: INCLUDES,
)


# Next we get the extension dependencies.
py = import('python').find_installation()
dependencies = [py.dependency(), dependency('pybind11')]

# Extension as [extension name, subdirectory]. The 'extension name' names the
# eventual module name, and 'subdirectory' gives the source and installation 
# directories (relative to SRC_DIR and INST_DIR).
extensions = [
   ['day1', 'day1'],
   ['advent', '']
]

foreach extension : extensions
    rawname = extension[0]
    name = '_' + rawname
    subdir = extension[1]

    message('Going to build extension module ' + subdir / name + '.')

    # Register extension module to build.
    py.extension_module(
        name,
        [SRC_DIR / subdir / 'bindings.cpp'],
        dependencies: dependencies,
        link_with: libcommon,
        install: true,
        subdir: INST_DIR / subdir,
        include_directories: INCLUDES,
    )
endforeach