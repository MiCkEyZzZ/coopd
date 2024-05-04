#ifndef COOPD_MOTORCYCLE_H
#define COOPD_MOTORCYCLE_H

struct motorcycle_t;

// аллокатор памяти
struct motorcycle_t* motorcycle_new();

// конструктор
void motorcycle_ctor(struct motorcycle_t*);

// деструктор
void motorcycle_dtor(struct motorcycle_t*);

// поведенческие ф-ии
void motorcycle_start(struct motorcycle_t*);
void motorcycle_stop(struct motorcycle_t*);
double motorcycle_get_engine_temperature(struct motorcycle_t*);

#endif //COOPD_MOTORCYCLE_H
