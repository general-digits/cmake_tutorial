@echo off
set PATH_TO_SCRIPT=%~dp0
set	BUILD_FOLDER_NAME=bin
set PATH_TO_MINGW=%PATH_TO_SCRIPT%../../../tool/mingw64/bin
set PATH_TO_MAKE=%PATH_TO_MINGW%/mingw32-make.exe
set PATH_TO_C_COMPILER=%PATH_TO_MINGW%/gcc.exe
set PATH_TO_CXX_COMPILER=%PATH_TO_MINGW%/g++.exe
set PATH_TO_CMAKE=%PATH_TO_SCRIPT%../../../tool/cmake/3.21.4/bin/cmake.exe
set BUILD_COMMAND=%PATH_TO_C_COMPILER%

if not exist %BUILD_FOLDER_NAME% mkdir %BUILD_FOLDER_NAME%
%PATH_TO_CMAKE% -G "MinGW Makefiles" -D "CMAKE_MAKE_PROGRAM:PATH=%PATH_TO_MAKE%" "CMAKE_CXX_COMPILER=:PATH=%PATH_TO_CXX_COMPILER%" -B %BUILD_FOLDER_NAME%  -S ../cxx-example

%PATH_TO_MAKE% -C %BUILD_FOLDER_NAME%

rem D:\exterior\projects\cmake_repo\tool\cmake\3.21.4\bin\cmake.exe -G "MinGW Makefiles" -D CMAKE_C_COMPILER=gcc -B %build_folder_name%  -S ../c-example
