@echo off

echo Build started...
cmake -G "MinGW Makefiles" -D CMAKE_C_COMPILER=gcc -B D:\exterior\cmake\workshop\00_From_a_Simple_Executable_to_Libraries\02_Building_and_linking_static_and_shared_libraries\cxx-objlib-example\build -S D:\exterior\cmake\workshop\00_From_a_Simple_Executable_to_Libraries\02_Building_and_linking_static_and_shared_libraries\cxx-objlib-example
mingw32-make all
