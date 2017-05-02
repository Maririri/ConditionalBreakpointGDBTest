cmake_minimum_required(VERSION 3.8)
project(ConditionalBreakpointDebug)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(executable ${SOURCE_FILES})

add_library(lib SHARED lib.cpp)

target_link_libraries(executable lib)