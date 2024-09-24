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

## TODO

- [ ] Publish build artifacts from stages to be able to rerun a stage
      on a different runner
- [ ] List source files for packaging
- [ ] Build project on other architectures
