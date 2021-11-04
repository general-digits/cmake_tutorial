@echo off

set	build_folder_name=bin

if not exist %build_folder_name% mkdir %build_folder_name%
cmake -G "MinGW Makefiles" -DCMAKE_CXX_COMPILER=g++ -B %build_folder_name%  -S ../cxx-objlib-example
mingw32-make -C %build_folder_name%
