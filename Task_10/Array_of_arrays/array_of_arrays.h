#ifndef ARRAY_OF_ARRAYS_H
#define ARRAY_OF_ARRAYS_H

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

typedef struct Array_of_arrays {
    int64_t *array_of_arrays;
    int64_t rows;
    int64_t columns;
} Array_of_arrays;

Array_of_arrays *initialize(int64_t rows, int64_t columns);
void fill_in_array_of_arrays(Array_of_arrays *array_of_arrays);
int64_t get_minimum_element(Array_of_arrays *array_of_arrays);
void normalize(Array_of_arrays *array_of_arrays, int64_t element);
void output(Array_of_arrays *array_of_arrays);
void free_array_of_arrays(Array_of_arrays *array_of_arrays);

#endif