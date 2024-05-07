#ifndef COOPD_ANIMAL_H
#define COOPD_ANIMAL_H

// предварительное объявление
struct animal_t;

// аллокатор памяти
struct animal_t* animal_new();

// конструктор
void animal_ctor(struct animal_t*);

// деструктор
void animal_dtor(struct animal_t*);

// поведенческие ф-ии
void animal_get_name(struct animal_t*, char*);
// должна быть полиморфной и должна переопределяться дочерними классами
void animal_sound(struct animal_t*);

#endif // COOPD_ANIMAL_H
