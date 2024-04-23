cmake_minimum_required (VERSION 3.8)

project ("profiling")

add_executable (profiling "src/main.cpp")


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET profiling PROPERTY CXX_STANDARD 20)
endif()

