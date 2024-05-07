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
        bus/bus.c
        bus/bus.h
        bus/person.h
        bus/person.c
        bus/main.c
        user/person.h
        user/person.c
        user/person_p.h
        user/student.h
        user/student.c
        user/main.c
        employee/employee.h
        employee/person.c
        employee/employee.c
        employee/person.h
        employee/main.c
        animal/animal.h
        animal/animal_p.h
        animal/animal.c
        animal/cat.h
        animal/cat.c
        animal/duck.h
        animal/duck.c
        animal/main.c
)
