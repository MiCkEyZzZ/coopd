#include <stdio.h>
#include <stdlib.h>

#include "motorcycle.h"

int main(int argc, char** argv) {
    // выделяем память для объекта motorcycle
    struct motorcycle_t* motorcycle = motorcycle_new();

    // создаём объект motorcycle
    motorcycle_ctor(motorcycle);

    printf("Температура двигателя до начала запуска двигателя мотоцикла: %f\n",
           motorcycle_get_engine_temperature(motorcycle));

    motorcycle_start(motorcycle);

    printf("Температура двигателя после запуска двигателя мотоцикла: %f\n",
           motorcycle_get_engine_temperature(motorcycle));

    motorcycle_stop(motorcycle);

    printf("Температура двигателя после остановки двигателя мотоцикла: %f\n",
           motorcycle_get_engine_temperature(motorcycle));

    // уничтожаем объект motorcycle
    motorcycle_dtor(motorcycle);

    // освобождаем память, выделенную для объекта motorcycle
    free(motorcycle);

    return 0;
}