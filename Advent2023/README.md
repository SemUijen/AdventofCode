# Advent of Code 2023

This repo contains my solutions to the advent of code 2023. I used this years advent to learn more about the pybind11 module and c++ language

## Setting up a local installation

Make sure you have a reasonably modern C++ compiler. Any recent version that supports (most of) the C++20 standard should do. Once you have a compiler installed, you can proceed by cloning this repository
> [!NOTE]
> When running windows, install [WSL][1] as windows has some issues with compiling and clone the repo into the WSL environment

Now, clone and change into the Advent 2023 directory, and set-up the virtual environment using poetry:

```shell
cd PyVRP

pip install --upgrade poetry
poetry install
```

## Building the Python extensions

my Advent 2023 uses Python extensions that are written in C++ for performance. These extensions are built every time `poetry install` is used, but that command builds everything in release mode. While developing, one typically wants to use debug builds. These (and more) can be made by using the `build_extensions.py` script directly, as follows:

```
poetry run python build_extensions.py --clean
```

[1]: https://github.com/SemUijen/AdventofCode.git