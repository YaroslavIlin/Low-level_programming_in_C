#ifndef GET_ARRAY_H
#define GET_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <limits.h>

void get_array_size(long long int *array_size);
int8_t initialize_array_of_arrays(long long int ***array_of_arrays, long long int **number_of_elements, long long int array_of_arrays_size);
void fill_in_array_of_arrays(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size, long long int *minimum_elements);
int8_t get_array_elements(long long int *array, long long int array_size);
long long int *get_minimum_element(long long int *array, long long int array_size);
void normalize(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size, long long int minimum_element);
void output(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size);
void array_free(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size);

#endif