#include <stdio.h>

int main() {
    float amount, total = 0;
    int count = 0;

    while (1) {
        printf("Enter recharge amount: ");
        scanf("%f", &amount);

        if (amount <= 0) {
            break;
        }

        total += amount;
        count++;

        if (total > 5000) {
            printf("Recharge Limit Reached\n");
            break;
        }
    }

    printf("Total Recharged Amount: %.2f\n", total);
    printf("Recharge Attempts: %d\n", count);

    return 0;
}
