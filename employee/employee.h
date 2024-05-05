#ifndef COOPD_EMPLOYEE_H
#define COOPD_EMPLOYEE_H

// предварительные объявление
struct employee_t;

// аллокатор памяти
struct employee_t* employee_new();

// конструктор (имя, фамилия, год рождения, номер пропуска, выполненные задачи)
void employee_ctor(
        struct employee_t*,
        const char*,
        const char*,
        unsigned int,
        const char*,
        unsigned int
    );

// деструктор
void employee_dtor(struct employee_t*);

// поведенческие ф-ии
void employee_get_first_name(struct employee_t*, char*);
void employee_get_last_name(struct employee_t*, char*);
unsigned int employee_get_birth_year(struct employee_t*);
void employee_get_employee_number(struct employee_t*, char*);
unsigned int employee_get_passed_tasks(struct employee_t*);

#endif // COOPD_EMPLOYEE_H
