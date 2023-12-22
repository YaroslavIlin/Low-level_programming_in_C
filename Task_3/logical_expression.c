/*
 * Задание: записать логическое выражение,
 * которое является истинным тогда,
 * когда выполняются условия при заданных числах k, l, m, n.
 * Если k = 0, то l > m. Но если k < 0, то 2l - 3n < m.
*/

#include "logical_expression.h"

int main() {
    setbuf(stdout, NULL);
    
    int8_t k, l, m, n;

    printf("Enter number k: ");
    scanf("%"SCNd8, &k);

    printf("Enter number l: ");
    scanf("%"SCNd8, &l);

    printf("Enter number m: ");
    scanf("%"SCNd8, &m);

    printf("Enter number n: ");
    scanf("%"SCNd8, &n);

    get_result(k, l, m, n);

    return 0;
}

void get_result(int8_t k, int8_t l, int8_t m, int8_t n) {
    if (k == 0 && l > m) {
        printf("True\n");
    } else if (k < 0 && ((2 * l) - (3 * n)) < m) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}