cmake_minimum_required(VERSION 3.22)

project(HelloCMake VERSION 1.3)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_BUILD_RPATH_USE_ORIGIN TRUE)

configure_file(
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
)

configure_file(
  "${PROJECT_SOURCE_DIR}/version.txt.in"
  "${PROJECT_BINARY_DIR}/version.txt"
)

add_executable(HelloCMake main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/lib"
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  matte
  SensorData
)

add_library(matte lib/matte.cpp)
add_library(SensorData SHARED lib/SensorData.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.15.2
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_subdirectory(test)
