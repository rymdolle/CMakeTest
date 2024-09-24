#!/bin/bash
if [[ ! -d "/src" ]]; then
    echo "No source directory found."
    echo "Mount your source code to /src"
    exit 1
fi
cmake -S /src -B . -G "Ninja"
cmake --build .
./HelloCMake
ctest -V
cppcheck --project=compile_commands.json --error-exitcode=1 -i_deps
