#ifndef COOPD_STUDENT_H
#define COOPD_STUDENT_H

// предварительное объявление
struct student_t;

// аллокатор памяти
struct student_t* student_new();

// конструктор (имя, фамилия, год рождения, номер студенческого билета, засчитанные кредиты)
void student_ctor(
        struct student_t*,
        const char*,
        const char*,
        unsigned int,
        const char*,
        unsigned int
        );

// деструктор
void student_dtor(struct student_t*);

// поведенческие ф-ии
void student_get_student_number(struct student_t*, char*);
unsigned int student_get_passed_credits(struct student_t*);

#endif // COOPD_STUDENT_H
