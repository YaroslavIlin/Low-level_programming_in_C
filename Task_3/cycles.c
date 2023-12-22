/*
 * Задание: написать 3 программы, используя цикл с предусловием,
 * цикл с постусловием и цикл с параметром, для решения задачи:
 * дано целое число N (> 0), найти произведение 1 * 2 * ... * N.
 * Чтобы избежать целочисленного переполнения,
 * вычислять это произведение с помощью вещественной переменной и
 * выводить его как вещественное число.
*/

#include "cycles.h"

int main() {
    setbuf(stdout, NULL);

    long double N;
    printf("Enter number N: ");
    scanf("%Lf", &N);

    long double product_of_numbers_1 = 1;
    long double product_of_numbers_2 = 1;
    long double product_of_numbers_3 = 1;

    get_while_cycle(N, &product_of_numbers_1);
    get_do_while_cycle(N, &product_of_numbers_2);
    get_for_cycle(N, &product_of_numbers_3);

    printf("Product of numbers (1st way) = %.2Lf\n", product_of_numbers_1);
    printf("Product of numbers (2nd way) = %.2Lf\n", product_of_numbers_2);
    printf("Product of numbers (3rd way) = %.2Lf", product_of_numbers_3);

    return 0;
}

void get_while_cycle(long double N, long double *product_of_numbers_1) {
    long double i = 0;
    while (i < N) {
        i += 1.0;
        *product_of_numbers_1 *= i;
    }
}

void get_do_while_cycle(long double N, long double *product_of_numbers_2) {
    long double i = 0;
    do {
        i += 1.0;
        *product_of_numbers_2 *= i;
    } while (i < N);
}

void get_for_cycle(long double N, long double *product_of_numbers_3) {
    for (int number = 1; number <= N; number++) {
        *product_of_numbers_3 *= number;
    }
}