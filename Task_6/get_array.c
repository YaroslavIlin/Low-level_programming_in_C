#include "get_array.h"

void get_array_size(long long int *array_size) {
    char space;
    long long int size;
    int8_t count = scanf("%lld%c", &size, &space);
    if (count != EOF && count == 2 && (space == ' ' || (size == 0 && space == '\n'))) {
        *array_size = size;
    } else {
        *array_size = -1;
    }
}

int8_t get_array_elements(long long int *array, long long int array_size) {
    char space_n;
    int8_t flag = 1;
    long long int element;
    for (long long int i = 0; i < array_size && flag; i++) {
        int8_t count = scanf("%lld%c", &element, &space_n);
        if (count != EOF && count == 2 && (space_n == ' ' || space_n == '\n')) {
            *(array + i) = element;
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

void perform() {
    long long int array_size = -1;
    long long int *array;
    get_array_size(&array_size);
    if (array_size == -1) {
        printf("Error!");
    } else if (array_size == 0) {
        printf("None\n");
        printf("Array size is zero");
    } else {
        array = malloc(array_size * sizeof(long long int));
        if (array) {
            if (get_array_elements(array, array_size)) {
                if (array_size == 1) {
                    printf("NULL");
                } else {
                    printf("%lld", *get_minimum_element(array, array_size));
                }
            } else {
                printf("Error!");
            }
        } else {
            printf("Error!");
        }
        free(array);
        array = NULL;
    }
}