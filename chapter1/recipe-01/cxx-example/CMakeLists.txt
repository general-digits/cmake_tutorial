# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-01 LANGUAGES CXX)

# set compile flags
set(GCC_COMPILE_FLAGS "-static -static-libgcc -static-libstdc++ ")
# set linker flags
set(GCC_LINKER_FLAGS "-static -static-libgcc -static-libstdc++ ")

add_executable(hello-world hello-world.cpp)
