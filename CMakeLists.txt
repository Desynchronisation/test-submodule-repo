cmake_minimum_required(VERSION 3.0.0)

set(This TestSubmodule)

project(${This} VERSION 0.1.0)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)

enable_testing()
add_subdirectory(src/googletest)
add_subdirectory(src/tests)
add_subdirectory(src/add)

file(GLOB Sources
    "src/*.h"
    "src/*.cpp"
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    add
)