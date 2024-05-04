#ifndef COOPD_CAR_H
#define COOPD_CAR_H

// структура описывающая объект car
typedef struct {
    char mark[32];
    char model[32];
    char color[32];
    double speed;
    double price;
} car_t;

// функции описывающие поведение объекта car
void car_construct(car_t*, const char*, const char*, const char*);
void car_destruct(car_t*);
void car_set_speed(car_t*, double);
void car_set_price(car_t*, double);

#endif //COOPD_CAR_H
