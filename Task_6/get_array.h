#ifndef GET_ARRAY_H
#define GET_ARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void get_array_size(long long int *array_size);
int8_t get_array_elements(long long int *array, long long int array_size);
long long int *get_minimum_element(long long int *array, long long int array_size);
void perform();

#endif