#ifndef COOPD_PERSON_H
#define COOPD_PERSON_H

// предварительное объявление
struct person_t;

// аллокатор памяти
struct person_t* person_new();

// конструктор (имя, фамилия, год рождения)
void person_ctor(struct person_t*, const char*, const char*, unsigned int);

// деструктор
void person_dtor(struct person_t*);

// поведенческие ф-ии
void person_get_first_name(struct person_t*, char*);
void person_get_last_name(struct person_t*, char*);
unsigned int person_get_birth_year(struct person_t*);

#endif // COOPD_PERSON_H
