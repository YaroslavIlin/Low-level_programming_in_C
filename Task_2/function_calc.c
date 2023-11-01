/*
 * Задание: написать блок-схему и программу вычисления функции y(x)
 * для всех различных вариантов входных параметров.
 * Ввести с клавиатуры x, вывести значение функции для всех вариантов.
*/

#include <stdio.h>
#include <math.h>

double calculate_y(double a, double b, double z, double x);

int main() {
    double x, y_1, y_2, y_3;

    printf("Enter x:");
    scanf("%lf", &x);

    y_1 = calculate_y(1.2, 7.2, exp(x), x);
    y_2 = calculate_y(-1.5, 3.2, exp(2 * x), x);
    y_3 = calculate_y(1.7, 5.5, exp(3.0), x);

    printf("y_1 = %.3lf\ty_2 = %.3lf\ty_3 = %.3lf", y_1, y_2, y_3);
    
    return 0;
}

double calculate_y(double a, double b, double z, double x) {
    double y = 0;

    if (x < pow(a, 3.0)) {
        y = a * pow(sin(x), 2) + b * cos(z * x + a);
    } else if (x >= pow(a, 3.0) && x <= b) {
        y = pow(a + b * x, 2) - sin(a + z * x);
    } else if (x > b) {
        y = sqrt(x - sin(b * x + z));
    }

    return y;
}