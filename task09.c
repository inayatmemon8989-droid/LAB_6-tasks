#include <stdio.h>

int main() {
    float units[5];
    float total_units = 0, total_amount = 0;
    float high, low;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter units for household %d: ", i + 1);
        scanf("%f", &units[i]);
    }

    total_units = units[0];
    high = units[0];
    low = units[0];

    for (i = 1; i < 5; i++) {
        total_units += units[i];
        if (units[i] > high) {
            high = units[i];
        }
        if (units[i] < low) {
            low = units[i];
        }
    }

    for (i = 0; i < 5; i++) {
        float bill = units[i] * 10;
        if (units[i] > 500) {
            bill += bill * 0.05;
        }
        total_amount += bill;
    }

    printf("Total Units Consumed: %.2f\n", total_units);
    printf("Highest Units: %.2f\n", high);
    printf("Lowest Units: %.2f\n", low);
    printf("Total Amount Collected: %.2f\n", total_amount);

    return 0;
}
