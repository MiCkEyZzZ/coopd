#ifndef COOPD_BOOK_H
#define COOPD_BOOK_H

#include <unistd.h>

// структура атрибутов без публично доступных полей
struct books_list_t;

// ф-я выделения памяти
struct books_list_t* books_malloc();

// конструктор и деструктор
void books_init(struct books_list_t*);
void books_destroy(struct books_list_t*);

// публичные поведенческие ф-ии
int book_add(struct books_list_t*, int);
int books_get(struct books_list_t*, int, int*);
void books_clear(struct books_list_t*);
size_t books_size(struct books_list_t*);
void books_print(struct books_list_t*);

#endif // COOPD_BOOK_H
