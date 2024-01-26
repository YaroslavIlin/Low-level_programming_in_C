#include "array_of_arrays.h"

int main() {
    setbuf(stdout, NULL);

    int64_t rows, columns;
    char ch;
    if (scanf("%lld %lld%c", &rows, &columns, &ch) == 3 && rows > 0 && columns > 0 && ch == '\n') {
        Array_of_arrays *array_of_arrays = initialize(rows, columns);
        fill_in_array_of_arrays(array_of_arrays);
        int64_t minimum_element = get_minimum_element(array_of_arrays);
        normalize(array_of_arrays, minimum_element);
        printf("\n");
        output(array_of_arrays);
        free_array_of_arrays(array_of_arrays);
    } else {
        printf("Error!");
    }
    
    return 0;
}