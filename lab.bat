@echo off
setlocal EnableDelayedExpansion

set PATH=!PATH!;C:\Program Files\Cppcheck
set PATH=!PATH!;C:\Program Files\doxygen\bin
set PATH=!PATH!;C:\Program Files\CMake\bin
set PATH=!PATH!;C:\mingw-w64\mingw32\bin

doskey make=mingw32-make.exe $*

cmd.exe /k
