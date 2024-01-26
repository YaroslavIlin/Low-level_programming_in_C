#include "array_of_arrays.h"

Array_of_arrays *initialize(int64_t rows, int64_t columns) {
    Array_of_arrays *array_of_arrays = (Array_of_arrays*)malloc(sizeof(Array_of_arrays));
    array_of_arrays->array_of_arrays = malloc(rows * columns * sizeof(int64_t));
    array_of_arrays->rows = rows;
    array_of_arrays->columns = columns;
    return array_of_arrays;
}

void fill_in_array_of_arrays(Array_of_arrays *array_of_arrays) {
    char space_n;
    int64_t element;
    for (int64_t i = 0; i < array_of_arrays->rows; i++) {
        for (int64_t j = 0; j < array_of_arrays->columns; j++) {
            int8_t count = scanf("%lld%c", &element, &space_n);
            if (count != EOF && count == 2 && (space_n == ' ' || space_n == '\n'))
                array_of_arrays->array_of_arrays[i * array_of_arrays->columns + j] = element;
        }
    }
}

int64_t get_minimum_element(Array_of_arrays *array_of_arrays) {
    int64_t *minimum_element = array_of_arrays->array_of_arrays;
    int64_t size = array_of_arrays->rows * array_of_arrays->columns;
    for (int64_t i = 1; i < size; i++) {
        if (*minimum_element > *(array_of_arrays->array_of_arrays + i))
            minimum_element = (array_of_arrays->array_of_arrays + i);
    }
    return *minimum_element;
}

void normalize(Array_of_arrays *array_of_arrays, int64_t element) {
    for (int64_t i = 0; i < array_of_arrays->rows; i++) {
        for (int64_t j = 0; j < array_of_arrays->columns; j++) {
            array_of_arrays->array_of_arrays[i * array_of_arrays->columns + j] -= element;
        }
    }
}

void output(Array_of_arrays *array_of_arrays) {
    for (int64_t i = 0; i < array_of_arrays->rows; i++) {
        for (int64_t j = 0; j < array_of_arrays->columns; j++) {
            if (j == array_of_arrays->columns - 1) {
                printf("%lld\n", array_of_arrays->array_of_arrays[i * array_of_arrays->columns + j]);
            } else {
                printf("%lld\t", array_of_arrays->array_of_arrays[i * array_of_arrays->columns + j]);
            }
        }
    }
}

void free_array_of_arrays(Array_of_arrays *array_of_arrays) {
    if (array_of_arrays != NULL) {
        free(array_of_arrays->array_of_arrays);
        free(array_of_arrays);
    }
}