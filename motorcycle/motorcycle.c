#include <stdlib.h>

// подключаем публичный интерфейс Engine
#include "engine.h"

typedef struct {
    // устанавливаем отношение композиции
    struct engine_t* engine;
} motorcycle_t;

motorcycle_t* motorcycle_new() {
    return (motorcycle_t*) malloc(sizeof(motorcycle_t));
}

void motorcycle_ctor(motorcycle_t* motorcycle) {
    // выделяем память для объекта engine
    motorcycle->engine = engine_new();

    // создаём объект engine
    engine_ctor(motorcycle->engine);
}

void motorcycle_dtor(motorcycle_t* motorcycle) {
    // уничтожаем объект engine
    engine_dtor(motorcycle->engine);

    // освобождаем память, выделенную для объекта engine
    free(motorcycle->engine);
}

void motorcycle_start(motorcycle_t* motorcycle) {
    engine_turn_on(motorcycle->engine);
}

void motorcycle_stop(motorcycle_t* motorcycle) {
    engine_turn_off(motorcycle->engine);
}

// Ф-я даёт доступ к атрибуту temperature объекта engine используя публичный
// интерфейс engine. Приватная реализация motorcycle потребляет интерфейс
// engine. Это означает, что объект motorcycle ничего не знает о деталях
// реализации engine.
double motorcycle_get_engine_temperature(motorcycle_t* motorcycle) {
    return engine_get_temperature(motorcycle->engine);
}