#include "get_array_of_arrays.h"

void get_array_size(long long int *array_size) {
    char space;
    long long int size;
    int8_t count = scanf("%lld%c", &size, &space);
    if (count != EOF && count == 2 && size >= 0 && (space == ' ' || space == '\n')) {
        *array_size = size;
    } else {
        *array_size = -1;
    }
}

int8_t initialize_array_of_arrays(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size) {
    int8_t flag = 1;
    if (array_of_arrays_size == -1) {
        flag = 0;
        printf("Error!");
    } else if (array_of_arrays_size == 0) {
        flag = 0;
        printf("None\n");
        printf("Array of arrays size is zero");
    } else {
        array_of_arrays = calloc(array_of_arrays_size, sizeof(long long int*));
        number_of_elements = malloc(array_of_arrays_size * sizeof(long long int));
        if (!array_of_arrays && !number_of_elements) {
            flag = 0;
            printf("Error!");
        }
    }
    return flag;
}

void fill_in_array_of_arrays(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size, long long int *minimum_elements) {
    long long int size = -1;
    for (long long int i = 0; i < array_of_arrays_size; i++) {
        get_array_size(&size);
        if (size != -1) {
            number_of_elements[i] = size;
            array_of_arrays[i] = calloc(number_of_elements[i], sizeof(long long int));
            if (array_of_arrays[i]) {
                if (get_array_elements(array_of_arrays[i], number_of_elements[i])) {
                    *(minimum_elements + i) = *get_minimum_element(array_of_arrays[i], number_of_elements[i]);
                } else {
                    printf("Error!");
                }
            } else {
                printf("Error!");
            }
        } else {
            printf("Error!");
        }
    }
}

int8_t get_array_elements(long long int *array, long long int array_size) {
    char space_n;
    int8_t flag = 1;
    long long int element;
    for (long long int i = 0; i < array_size && flag; i++) {
        int8_t count = scanf("%lld%c", &element, &space_n);
        if (count != EOF && count == 2 && (space_n == ' ' || space_n == '\n')) {
            array[i] = element;
        } else {
            flag = 0;
        }
    }
    return flag;
}

long long int *get_minimum_element(long long int *array, long long int array_size) {
    long long int *minimum_element = array;
    for (long long int i = 1; i < array_size; i++) {
        if (*minimum_element > *(array + i)) {
            minimum_element = (array + i);
        }
    }
    return minimum_element;
}

void normalize(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size, long long int minimum_element) {
    for (long long int i = 0; i < array_of_arrays_size; i++) {
        for (long long int j = 0; j < number_of_elements[i]; j++) {
            array_of_arrays[i][j] -= minimum_element;
        }
    }
}

void output(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size) {
    for (long long int i = 0; i < array_of_arrays_size; i++) {
        for (long long int j = 0; j < number_of_elements[i]; j++) {
            if (j == number_of_elements[i] - 1) {
                printf("%lld\n", array_of_arrays[i][j]);
            } else {
                printf("%lld\t", array_of_arrays[i][j]);
            }
        }
    }
}

void array_free(long long int **array_of_arrays, long long int *number_of_elements, long long int array_of_arrays_size) {
    for (long long int i = 0; i < array_of_arrays_size; i++) {
        free(array_of_arrays[i]);
    }
    free(array_of_arrays);
    free(number_of_elements);
}