#ifndef COOPD_ANIMAL_P_H
#define COOPD_ANIMAL_P_H

// типа указателя, необходимого для обращения к разным версиям animal_t
typedef void (*sound_func_t)(void*);

// предварительное объявление
typedef struct {
    char* name;
    // указатель на ф-ю, которая отвечает за вывод звуков
    sound_func_t sound_func;
} animal_t;

#endif // COOPD_ANIMAL_P_H
