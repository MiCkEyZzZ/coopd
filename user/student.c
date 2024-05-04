#include <stdlib.h>
#include <string.h>

#include "person.h"
#include "person_p.h" // определение person_t, которое в этом месте необходимо

// предварительное объявление
typedef struct {
    // при помощи это вложенности мы наследуем все атрибуты класса Person и
    // получим доступ ко всем его поведенческим ф-ям.
    person_t person;
    char* student_number;
    unsigned int passed_credits;
} student_t;

// аллокатор памяти
student_t* student_new() {
    return (student_t*) malloc(sizeof(student_t));
}

// конструктор
void student_ctor(
        student_t* student,
        const char* first_name,
        const char* last_name,
        unsigned int birth_year,
        const char* student_number,
        unsigned int passed_credits
    ) {
    // вызываем конструктор родительского класса
    person_ctor((struct person_t*)student, first_name, last_name, birth_year);
    student->student_number = (char*) malloc(16 * sizeof(char));
    strcpy(student->student_number, student_number);
    student->passed_credits = passed_credits;
}

// деструктор
void student_dtor(student_t* student) {
    // сначала нужно уничтожить дочерний объект
    free(student->student_number);
    // далее вызываем деструктор родительского класса
    person_dtor((struct person_t*)student);
}

// поведенческие ф-ии
void student_get_student_number(student_t* student, char* buffer) {
    strcpy(buffer, student->student_number);
}

unsigned int student_get_passed_credits(student_t* student) {
    return student->passed_credits;
}