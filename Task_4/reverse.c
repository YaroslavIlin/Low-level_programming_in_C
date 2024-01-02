#include "reverse.h"

void reverse_p_begin_and_count(int8_t *p_begin, int8_t count) {
    int8_t array_copy[count];

    for (int8_t i = 0; i < count; i++) {
        array_copy[i] = *(p_begin + i);
    }

    for (int8_t i = 0; i < count; i++) {
        *(p_begin + i) = array_copy[count - 1 - i];
    }
}

void reverse_p_begin_and_p_end(int8_t *p_begin, int8_t *p_end) {
    int8_t temp;

    while (p_begin < p_end) {
        temp = *p_begin;
        *p_begin = *(p_end - 1);
        *(p_end - 1) = temp;
        p_begin++;
        p_end--;
    }
}