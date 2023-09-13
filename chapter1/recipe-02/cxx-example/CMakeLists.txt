# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-02 LANGUAGES CXX)


# set compile flags
set(GCC_COMPILE_FLAGS "-static -static-libgcc -static-libstdc++ ")
# set linker flags
set(GCC_LINKER_FLAGS "-static -static-libgcc -static-libstdc++ ")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COMPILE_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_LINKER_FLAGS}")


add_executable(hello-world hello-world.cpp)
