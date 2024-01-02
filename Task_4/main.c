#include "reverse.h"
#include "sort.h"

#include <stdio.h>
#define ARRAY_SIZE 10

void output(int8_t *p);

int main() {
    int8_t array_1[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int8_t array_2[ARRAY_SIZE] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int8_t array_3[ARRAY_SIZE] = { 7, 1, 6, 2, 5, 4, 3, 9, 8, 1 };
    int8_t array_4[ARRAY_SIZE] = { 59, 19, 11, 66, 4, 55, 99, 77, 2, 1 };

    output(array_1);
    reverse_p_begin_and_count(array_1, ARRAY_SIZE);
    output(array_1);

    printf("\n");

    output(array_2);
    reverse_p_begin_and_p_end(array_2, array_2 + ARRAY_SIZE);
    output(array_2);

    printf("\n");

    output(array_3);
    sort_p_begin_and_count(array_3, ARRAY_SIZE);
    output(array_3);

    printf("\n");

    output(array_4);
    sort_p_begin_and_p_end(array_4, array_4 + ARRAY_SIZE);
    output(array_4);

    return 0;
}

void output(int8_t *p) {
    for (int8_t i = 0; i < ARRAY_SIZE; i++) {
        if (i == ARRAY_SIZE - 1) {
            printf("%d\n", *(p + i));
        } else {
            printf("%d ", *(p + i));
        }
    }
}