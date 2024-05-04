#include <string.h>

#include "car.h"

// определение подключённых выше ф-ий
void car_construct(
        car_t* car,
        const char* mark,
        const char* model,
        const char* color
) {
    strcpy(car->mark, mark);
    strcpy(car->model, model);
    strcpy(car->color, color);
    car->speed = 0.0;
    car->price = 0.0;
}

void car_destruct(car_t* car) {}

void car_set_speed(car_t* car, double speed) {
    car->speed = speed;
}

void car_set_price(car_t* car, double price) {
    car->price = price;
}