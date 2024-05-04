cmake_minimum_required(VERSION 3.28)
project(coopd C)

set(CMAKE_C_STANDARD 11)

add_executable(coopd
        car/car.c
        car/car.h
        car/main.c
        book/book.c
        book/book.h
        book/main.c
        motorcycle/motorcycle.c
        motorcycle/motorcycle.h
        motorcycle/engine.c
        motorcycle/engine.h
        motorcycle/main.c
)
