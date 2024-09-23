CMakeTest
=========

## Build

To build the project run
```
cmake -B build
cmake --build build
```

To build and launch tests in a docker container run
```
docker build -t cmaketest .
docker run --rm -v ./:/src:ro cmaketest
```
