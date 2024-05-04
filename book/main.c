#include <stdlib.h>

#include "book.h"

int reverse(struct books_list_t* source, struct books_list_t* dest) {
    books_clear(dest);

    for (size_t i = books_size(source) - 1; i >= 0; i--) {
        int item;

        if (books_get(source, i, &item)) {
            return -1;
        }

        book_add(dest, item);
    }

    return 0;
}

int main(int argc, char** argv) {
    struct books_list_t* list_first = books_malloc();
    struct books_list_t* list_second = books_malloc();

    // создание объектов
    books_init(list_first);
    books_init(list_second);

    book_add(list_first, 4);
    book_add(list_first, 6);
    book_add(list_first, 1);
    book_add(list_first, 5);

    book_add(list_second, 9);

    reverse(list_first, list_second);

    books_print(list_first);
    books_print(list_second);

    // уничтожение объектов
    books_destroy(list_first);
    books_destroy(list_second);

    free(list_first);
    free(list_second);

    return 0;
}