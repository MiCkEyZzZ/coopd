#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "animal.h"
#include "animal_p.h"

typedef struct {
    animal_t animal;
} duck_t;

// определяем новое поведение для операции sound
void __duck_sound(void* ptr) {
    animal_t* animal = (animal_t*)ptr;
    printf("%s: Кряк\n", animal->name);
}

// аллокатор памяти
duck_t* duck_new() {
    return (duck_t*) malloc(sizeof(duck_t));
}

// конструктор
void duck_ctor(duck_t* duck) {
    animal_ctor((struct animal_t*)duck);
    strcpy(duck->animal.name, "Утка");
    // указываем на новую поведенческую ф-ю
    // переопределяем
    duck->animal.sound_func = __duck_sound;
}

// деструктор
void duck_dtor(duck_t* duck) {
    animal_dtor((struct animal_t*)duck);
}