#include <stdio.h>
#include <stdlib.h>

#include "bus.h"
#include "person.h"

int main(int argc, char** argv) {
    // создаём и инициализируем объект bus
    struct bus_t* bus = bus_new();
    bus_ctor(bus, 3);

    // создаём и инициализируем объект person
    struct person_t* person = person_new();
    person_ctor(person, "Антон");

    // начинаем агрегацию
    person_get_bus(person, bus);

    // едем пока не закончится топливо
    while (bus_has_fuel(bus)) {
        person_drive_bus(person);
    }

    // заправляем автомобиль
    bus_refill(bus);

    // едем пока не закончится топливо
    while (bus_has_fuel(bus)) {
        person_drive_bus(person);
    }

    // завершаем агрегацию
    person_stop_bus(person);
    person_abandon_bus(person);

    // уничтожаем и освобождаем объект person
    person_dtor(person);
    free(person);

    // уничтожаем и освобождаем объект bus
    bus_dtor(bus);
    free(bus);

    return 0;
}