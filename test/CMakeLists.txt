add_executable(HelloCMakeTest main.cpp
  matte_TEST.cpp
)

target_link_libraries(HelloCMakeTest PRIVATE
  gtest
  gtest_main
  matte
)

target_include_directories(HelloCMakeTest PRIVATE
  ${CMAKE_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/lib
  ${GTEST_INCLUDE_DIRS}
)

add_test(NAME matteTest COMMAND HelloCMakeTest)
