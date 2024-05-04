#include <stdlib.h>

typedef double fuel_t;

// структура атрибута
typedef struct {
    double fuel;
} bus_t;

// аллокатор памяти
bus_t* bus_new() {
    return (bus_t*) malloc(sizeof(bus_t));
}

// конструктор
void bus_ctor(bus_t* bus, double initial_fuel) {
    bus->fuel = 0.0;

    if (initial_fuel > 0.0) {
        bus->fuel = initial_fuel;
    }
}

// деструктор
void bus_dtor(bus_t* bus) {}

// поведенческие ф-ии
fuel_t bus_has_fuel(bus_t* bus) {
    return (bus->fuel > 0.0);
}

void bus_accelerator(bus_t* bus) {
    bus->fuel--;
}

void bus_stopping(bus_t* bus) {}

void bus_refill(bus_t* bus) {
    bus->fuel = 7.5;
}