/*
 * Задание: написать программу вычисления стоимости переговоров,
 * если по субботам и воскресеньям предоставляется скидка 20%.
 * Ввести продолжительность разговора и день недели (цифра от 1 до 7).
*/

#include <stdio.h>

int main() {
    const double cost_per_hour = 123.4;

    double cost, duration;
    int day_of_week;

    printf("Enter duration of negotiations (in hours):");
    scanf("%lf", &duration);

    printf("Enter day of week:");
    scanf("%d", &day_of_week);

    if (day_of_week == 6 || day_of_week == 7) {
        cost = 0.8 * duration * cost_per_hour;
    } else {
        cost = duration * cost_per_hour;
    }

    printf("Total cost: %.2lf", cost);

    return 0;
}