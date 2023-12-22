/*
 * Задание: написать программу вычисления стоимости переговоров,
 * если по субботам и воскресеньям предоставляется скидка 20%.
 * Ввести продолжительность разговора и день недели (цифра от 1 до 7).
*/

#include "cost_calc.h"

int main() {
    setbuf(stdout, NULL);

    const double cost_per_hour = 123.4;

    double cost, duration;
    int8_t day_of_week;

    printf("Enter duration of negotiations (in hours): ");
    scanf("%lf", &duration);

    printf("Enter day of week: ");
    scanf("%"SCNd8, &day_of_week);

    get_cost_calc(cost_per_hour, &cost, duration, day_of_week);

    printf("Total cost: %.2lf", cost);

    return 0;
}

void get_cost_calc(double cost_per_hour, double *cost, double duration, int8_t day_of_week) {
    if (day_of_week == 6 || day_of_week == 7) {
        *cost = 0.8 * duration * cost_per_hour;
    } else {
        *cost = duration * cost_per_hour;
    }
}