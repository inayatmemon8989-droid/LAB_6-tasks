#include <stdio.h>

int main() {
    float marks, total = 0;
    int count = 0;

    while (1) {
        printf("Enter student marks (-1 to stop): ");
        scanf("%f", &marks);

        if (marks == -1) {
            break;
        }

        if (marks >= 0 && marks <= 100) {
            total += marks;
            count++;
        } else {
            printf("Invalid marks. Enter between 0 and 100.\n");
        }
    }

    printf("Total Marks: %.2f\n", total);
    printf("Number of Students: %d\n", count);
    if (count > 0) {
        printf("Average Marks: %.2f\n", total / count);
    } else {
        printf("Average Marks: 0\n");
    }

    return 0;
}
