cmake_minimum_required(VERSION 3.22)

project(HelloCMake VERSION 1.2)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

configure_file(
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
)

add_executable(HelloCMake main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC
  "${PROJECT_BINARY_DIR}"
)
