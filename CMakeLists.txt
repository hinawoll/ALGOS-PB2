cmake_minimum_required(VERSION 3.20)
project(ALGOS_PB2 C)

set(CMAKE_C_STANDARD 99)

add_executable(main
        main.c
        avl.c
        fileio.c
        search.c
        tree.c)