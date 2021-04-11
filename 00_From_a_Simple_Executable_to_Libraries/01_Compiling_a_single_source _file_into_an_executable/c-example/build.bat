@echo off

echo Build started...
cmake -G "MinGW Makefiles" -D CMAKE_C_COMPILER=gcc -B D:\exterior\cmake\workshop\recipe-01\c-example\build -S D:\exterior\cmake\workshop\recipe-01\c-example
