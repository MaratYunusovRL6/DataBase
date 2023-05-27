cmake_minimum_required(VERSION 3.24)
project(bd)

set(CMAKE_CXX_STANDARD 17)

add_executable(bd main.cpp bd.h bd.cpp sqlite3.c sqlite3.h)
