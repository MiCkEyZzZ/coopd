#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "bus.h"

// структура атрибутов
typedef struct {
    char* name;
    struct bus_t* bus;
} person_t;

// аллокатор памяти
person_t* person_new() {
    return (person_t*) malloc(sizeof(person_t));
}

// конструктор
void person_ctor(person_t* person, const char* name) {
    person->name = (char*) malloc((strlen(name) + 1) * sizeof(char));

    // ф-я копирует из одной строки в другую.
    strcpy(person->name, name);

    // ВАЖНО! Указатели агрегации, которые не должны быть заданы в конструкторе,
    // необходимо обнулить.
    person->bus = NULL;
}

// деструктор
void person_dtor(person_t* person) {
    free(person->name);
}

// поведенческие ф-ии
void person_get_bus(person_t* person, struct bus_t* bus) {
    // начинается отношение типа агрегация
    person->bus = bus;
}

void person_drive_bus(person_t* person) {
    // проверяем взял ли человек автомобиль, иначе нет смысла начинать движение
    if (person->bus) {
        bus_accelerator(person->bus);
    } else {
        printf("Человек ещё не взял автомобиль.");
        exit(1);
    }
}

void person_stop_bus(person_t* person) {
    if (person->bus) {
        bus_stopping(person->bus);
    } else {
        printf("Человек ещё не взял автомобиль.");
        exit(1);
    }
}

void person_abandon_bus(person_t* person) {
    // Завершение агрегации двух объектов. Объект bus нет смысла освобождать,
    // так данный объект не является его владельцем.
    person->bus = NULL;
}