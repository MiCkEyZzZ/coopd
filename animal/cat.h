#ifndef COOPD_CAT_H
#define COOPD_CAT_H

// предварительное объявление
struct cat_t;

// аллокатор памяти
struct cat_t* cat_new();

// конструктор
void cat_ctor(struct cat_t*);

// деструктор
void cat_dtor(struct cat_t*);

// все поведенческие ф-ии наследуются от класса Animal

#endif // COOPD_CAT_H
