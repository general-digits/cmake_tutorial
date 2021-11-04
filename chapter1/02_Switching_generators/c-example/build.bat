@echo off

set	build_folder_name=bin

if not exist %build_folder_name% mkdir %build_folder_name%
cmake -G "MinGW Makefiles" -D CMAKE_C_COMPILER=gcc -B %build_folder_name%  -S ../c-example
mingw32-make -C %build_folder_name%
