#include <stdlib.h>
#include <string.h>

// публичный интерфейс класса Person
#include "person.h"

// предварительное объявление
typedef struct {
    char* employee_number;
    unsigned int passed_tasks;
    // указатель на person, так как person_t неполный
    struct person_t* person;
} employee_t;

// аллокатор памяти
employee_t* employee_new() {
    return (employee_t*) malloc(sizeof(employee_t));
}

// конструктор
void employee_ctor(
        employee_t* employee,
        const char* first_name,
        const char* last_name,
        unsigned int birth_year,
        const char* employee_number,
        unsigned int passed_tasks
    ) {
    // выделяем память для родительского объекта
    employee->person = person_new();
    person_ctor(employee->person, first_name, last_name, birth_year);
    employee->employee_number = (char*) malloc(16 * sizeof(char));
    strcpy(employee->employee_number, employee_number);
    employee->passed_tasks = passed_tasks;
}

// деструктор
void employee_dtor(employee_t* employee) {
    // уничтожаем дочерний объект
    free(employee->employee_number);
    // вызываем деструктор родительского класса
    person_dtor(employee->person);
    // освобождаем память, выделенную для родительского объекта
    free(employee->person);
}

// поведенческие ф-ии
void employee_get_first_name(employee_t* employee, char* buffer) {
    // используем поведенческие ф-ии класса Person
    person_get_first_name(employee->person, buffer);
}

void employee_get_last_name(employee_t* employee, char* buffer) {
    person_get_last_name(employee->person, buffer);
}

unsigned int employee_get_birth_year(employee_t* employee) {
    // используем поведенческие ф-ии класса Person
    return person_get_birth_year(employee->person);
}

void employee_get_employee_number(employee_t* employee, char* buffer) {
    strcpy(buffer, employee->employee_number);
}

unsigned int employee_get_passed_tasks(employee_t* employee) {
    return employee->passed_tasks;
}