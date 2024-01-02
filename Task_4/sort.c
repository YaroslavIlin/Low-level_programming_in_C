#include "sort.h"

void sort_p_begin_and_count(int8_t *p_begin, int8_t count) {
    int8_t temp;

    for (int8_t i = 0; i < count - 1; i++) {
        for (int8_t j = 0; j < count - 1 - i; j++) {
            if (*(p_begin + j) > *(p_begin + j + 1)) {
                temp = *(p_begin + j);
                *(p_begin + j) = *(p_begin + j + 1);
                *(p_begin + j + 1) = temp;
            }
        }
    }
}

void sort_p_begin_and_p_end(int8_t *p_begin, int8_t *p_end) {
    int8_t temp;

    for (int8_t *p_i = p_begin; p_i < p_end - 1; p_i++) {
        for (int8_t *p_j = p_begin; p_j < p_end - 1 - (p_i - p_begin); p_j++) {
            if (*(p_j) > *(p_j + 1)) {
                temp = *(p_j);
                *(p_j) = *(p_j + 1);
                *(p_j + 1) = temp;
            }
        }
    }
}