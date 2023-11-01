/*
 * Задание: записать логическое выражение,
 * которое является истинным тогда,
 * когда выполняются условия при заданных числах k, l, m, n.
 * Если k = 0, то l > m. Но если k < 0, то 2l - 3n < m.
*/

#include <stdio.h>

int main() {
    int k, l, m, n;

    printf("Enter number k:");
    scanf("%d", &k);

    printf("Enter number l:");
    scanf("%d", &l);

    printf("Enter number m:");
    scanf("%d", &m);

    printf("Enter number n:");
    scanf("%d", &n);

    if (k == 0 && l > m) {
        printf("True\n");
    } else if (k < 0 && ((2 * l) - (3 * n)) < m) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}