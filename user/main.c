#include <stdio.h>
#include <stdlib.h>

#include "person.h"
#include "student.h"

int main(int argc, char** argv) {
    // создаём объект student
    struct student_t* student = student_new();
    student_ctor(student, "Антон", "Чехов", 1991, "TA5667", 134);

    // используем поведенческие ф-ии объекта person для чтения атрибутов объекта
    // student
    char buffer[32];

    // восходящее приведение указателя к родительскому типу
    struct person_t* person_ptr = (struct person_t*)student;

    person_get_first_name(person_ptr, buffer);
    printf("Имя: %s\n", buffer);

    person_get_last_name(person_ptr, buffer);
    printf("Фамилия: %s\n", buffer);

    printf("Год рождения: %d\n", person_get_birth_year(person_ptr));

    // читаем атрибуты, принадлежащие объекту student
    student_get_student_number(student, buffer);
    printf("Студенческий номер: %s\n", buffer);

    printf("Пройденные зачеты: %d\n", student_get_passed_credits(student));

    // уничтожаем и освобождаем объект student
    student_dtor(student);
    free(student);

    return 0;
}