#ifndef COOPD_PERSON_H
#define COOPD_PERSON_H

// предварительное объявление типа
struct person_t;
struct bus_t;

// аллокатор памяти
struct person_t* person_new();

// конструктор
void person_ctor(struct person_t*, const char*);

// деструктор
void person_dtor(struct person_t*);

// поведенческие ф-ии
void person_get_bus(struct person_t*, struct bus_t*);
void person_drive_bus(struct person_t*);
void person_stop_bus(struct person_t*);
void person_abandon_bus(struct person_t*);

#endif // COOPD_PERSON_H
