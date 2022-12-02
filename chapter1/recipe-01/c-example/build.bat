@echo off
set PATH_TO_SCRIPT=%~dp0
set	BUILD_FOLDER_NAME=bin
set PATH_TO_MINGW=%PATH_TO_SCRIPT%../../../tool/mingw64/bin
set PATH_TO_MAKE=%PATH_TO_MINGW%/mingw32-make.exe
set PATH_TO_C_COMPILER=%PATH_TO_MINGW%/gcc.exe
set PATH_TO_CMAKE=%PATH_TO_SCRIPT%../../../tool/cmake/3.21.4/bin/cmake.exe

if not exist %BUILD_FOLDER_NAME% mkdir %BUILD_FOLDER_NAME%
%PATH_TO_CMAKE% -G "MinGW Makefiles" -D "CMAKE_MAKE_PROGRAM:PATH=%PATH_TO_MAKE%" "CMAKE_C_COMPILER=:PATH=%PATH_TO_C_COMPILER%" -B %BUILD_FOLDER_NAME%  -S ../c-example

%PATH_TO_MAKE% -C %BUILD_FOLDER_NAME%
