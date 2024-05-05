#include <stdio.h>
#include <stdlib.h>

#include "employee.h"

int main(int argc, char** argv) {
    // создаём объект employee
    struct employee_t* employee = employee_new();
    employee_ctor(employee, "Антое", "Чехов", 1887, "МШ-007", 134);

    // используем поведенческие ф-ии объекта student, так как его указатель
    // нельзя привести к типу person и мы не имеем доступ к приватному
    // родительскому указателю в объекте student
    char buffer[32];
    employee_get_first_name(employee, buffer);
    printf("Имя: %s\n", buffer);

    employee_get_last_name(employee, buffer);
    printf("Фамилия: %s\n", buffer);

    printf("Год рождения: %d\n", employee_get_birth_year(employee));

    employee_get_employee_number(employee, buffer);
    printf("Номер пропуска: %s\n", buffer);

    printf("Выполненные задачи: %d\n", employee_get_passed_tasks(employee));

    // уничтожаем и освобождаем объект employee
    employee_dtor(employee);
    free(employee);

    return 0;
}