#ifndef COOPD_DUCK_H
#define COOPD_DUCK_H

// предварительное объявление
struct duck_t;

// аллокатор памяти
struct duck_t* duck_new();

// конструктор
void duck_ctor(struct duck_t*);

// деструктор
void duck_dtor(struct duck_t*);

// все поведенческие ф-ии наследуются от класса Animal

#endif // COOPD_DUCK_H
