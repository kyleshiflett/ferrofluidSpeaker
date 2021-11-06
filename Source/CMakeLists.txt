cmake_minimum_required (VERSION 2.8.11)
project (FERROFLUID)

find_package(Threads REQUIRED)

add_executable(ferrofluid.exe main.cpp)
