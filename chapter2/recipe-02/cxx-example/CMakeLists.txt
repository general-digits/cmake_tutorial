# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(recipe-02 LANGUAGES CXX)

# define executable and its source file
add_executable(hello-world hello-world.cpp)

# let the preprocessor know about the system name
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
  target_compile_definitions(hello-world PUBLIC "IS_LINUX")
endif()
if(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
  target_compile_definitions(hello-world PUBLIC "IS_MACOS")
endif()
if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
  target_compile_definitions(hello-world PUBLIC "IS_WINDOWS")
endif()

#With the PRIVATE qualifier, compile definitions will only be applied to the given target and not by other targets consuming it.
#With the INTERFACE qualifier, compile definitions on a given target will only be applied to targets consuming it.
#With the PUBLIC qualifier, compile definitions will be applied to the given target and all other targets consuming it.