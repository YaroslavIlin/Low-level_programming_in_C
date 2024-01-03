#include "get_array_of_arrays.h"

int main() {
    setbuf(stdout, NULL);

    long long int array_of_arrays_size = -1;
    long long int **array_of_arrays = NULL;
    long long int *number_of_elements = NULL;
    long long int minimum_element;

    get_array_size(&array_of_arrays_size);
    if (initialize_array_of_arrays(array_of_arrays, number_of_elements, array_of_arrays_size)) {
        long long int minimum_elements[array_of_arrays_size];
        fill_in_array_of_arrays(array_of_arrays, number_of_elements, array_of_arrays_size, minimum_elements);
        minimum_element = *get_minimum_element(minimum_elements, array_of_arrays_size);
        normalize(array_of_arrays, number_of_elements, array_of_arrays_size, minimum_element);
        output(array_of_arrays, number_of_elements, array_of_arrays_size);
        array_free(array_of_arrays, number_of_elements, array_of_arrays_size);
    }
    
    return 0;
}