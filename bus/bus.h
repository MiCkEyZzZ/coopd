#ifndef COOPD_BUS_H
#define COOPD_BUS_H

typedef double fuel_t;

// предварительное объявление типа в итоге получается неполный тип, из которого
// нельзя создать объект
struct bus_t;

// аллокатор памяти
struct bus_t* bus_new();

// конструктор
void bus_ctor(struct bus_t*, double);

// деструктор
void bus_dtor(struct bus_t*);

// поведенческие ф-ии
fuel_t* bus_has_fuel(struct bus_t*);
void bus_accelerator(struct bus_t*);
void bus_stopping(struct bus_t*);
void bus_refill(struct bus_t*);

#endif // COOPD_BUS_H
