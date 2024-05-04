#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 12

// создаём псевдоним bool_t
typedef int bool_t;

// определяем тип books_list_t
typedef struct {
    size_t size;
    int* items;
} books_list_t;

// приватное поведение, которое проверяет, заполнен ли список
bool_t __list_is_full(books_list_t* list) {
    return (list->size == MAX_SIZE);
}

// приватное поведение для проверки индекса
bool_t __check_index(books_list_t* list, const int index) {
    return (index >= 0 && index <= list->size);
}

// выделение памяти для объекта list
books_list_t* books_malloc() {
    return (books_list_t*) malloc(sizeof(books_list_t));
}

// конструктор объекта list
void books_init(books_list_t* list) {
    list->size = 0;
    // выделение из кучи
    list->items = (int*) malloc(MAX_SIZE * sizeof(int));
}

// деструктор объекта list
void books_destroy(books_list_t* list) {
    // освобождаем выделенную память
    free(list->items);
}

int book_add(books_list_t* list, const int item) {
    // используем приватное поведение
    if (__list_is_full(list)) {
        return -1;
    }

    list->items[list->size++] = item;

    return 0;
}

int books_get(books_list_t* list, const int index, int* result) {
    if (__check_index(list, index)) {
        *result = list->items[index];

        return 0;
    }

    return -1;
}

void books_clear(books_list_t* list) {
    list->size = 0;
}

size_t books_size(books_list_t* list) {
    return list->size;
}

void books_print(books_list_t* list) {
    printf("[");
    for (size_t i = 0; i < list->size; i++) {
        printf("%d ", list->items[i]);
    }
    printf("]\n");
}




















