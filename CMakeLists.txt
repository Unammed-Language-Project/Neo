cmake_minimum_required(VERSION 3.19)
project(Neo C)

set(CMAKE_C_STANDARD 99)

add_executable(NeoInC main.c commons.h chunk.h chunk.c memory.h memory.c)