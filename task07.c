#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, avg, high, low;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    total = marks[0];
    high = marks[0];
    low = marks[0];

    for (i = 1; i < 5; i++) {
        total += marks[i];
        if (marks[i] > high) {
            high = marks[i];
        }
        if (marks[i] < low) {
            low = marks[i];
        }
    }

    avg = total / 5;

    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Highest Marks: %.2f\n", high);
    printf("Lowest Marks: %.2f\n", low);

    return 0;
}
