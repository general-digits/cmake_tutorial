@echo off

echo Build started...
cmake -G "MinGW Makefiles" -D CMAKE_C_COMPILER=gcc -B D:\exterior\cmake\workshop\00_From_a_Simple_Executable_to_Libraries\04_Controlling_compilation_with_conditionals\cxx-example\build -S D:\exterior\cmake\workshop\00_From_a_Simple_Executable_to_Libraries\04_Controlling_compilation_with_conditionals\cxx-example
mingw32-make all
