cmake_minimum_required(VERSION 3.0.0)

set(This add)

file(GLOB Sources
    "*.h"
    "*.cpp"
)

add_library(${This} STATIC ${Sources})
