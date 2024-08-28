#!/bin/bash
if [[ ! -d "/src" ]]; then
    echo "No source directory found."
    echo "Mount your source code to /src"
    exit 1
fi
cmake -S /src -B . -G "Ninja"
cmake --build .
./HelloCMake
