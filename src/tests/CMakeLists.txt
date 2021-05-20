cmake_minimum_required(VERSION 3.0.0)

set(This tests)

file(GLOB Sources
    "*.cpp"
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest
    gtest_main
    add
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
