#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "animal_p.h"

// родительское определение animal_sound, которое используется по умолчанию
void __animal_sound(void* this_ptr) {
    animal_t* animal = (animal_t*)this_ptr;
    printf("%s: Сигнал\n", animal->name);
}

// аллокатор памяти
animal_t* animal_new() {
    return (animal_t*) malloc(sizeof(animal_t));
}

// конструктор
void animal_ctor(animal_t* animal) {
    animal->name = (char*) malloc(10 * sizeof(char));
    strcpy(animal->name, "Животное");

    // присваиваем указателю на ф-ю адрес определения по умолчанию
    animal->sound_func = __animal_sound;
}

// деструктор
void animal_dtor(animal_t* animal) {
    free(animal->name);
}

// поведенческие ф-ии
void animal_get_name(animal_t* animal, char* buffer) {
    strcpy(buffer, animal->name);
}

void animal_sound(animal_t* animal) {
    // вызываем ф-ю, на которую ссылается указатель
    animal->sound_func(animal);
}