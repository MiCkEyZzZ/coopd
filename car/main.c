#include <stdio.h>

#include "car.h"

int main(int argc, char** argv) {
    // создаём переменную объекта
    car_t car;

    // создаём объект
    car_construct(&car, "Лада", "Веста", "Чёрный");

    // основной алгоритм
    car_set_speed(&car, 150.0);
    car_set_price(&car, 1600.0);

    printf("Автомобиль: %s | %s | %s | %f | %f\n", car.mark, car.model, car.color, car.speed, car.price);

    // уничтожаем объект
    car_destruct(&car);

    return 0;
}