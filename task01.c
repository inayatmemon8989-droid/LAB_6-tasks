#include <stdio.h>

int main() {
    float balance = 50000;
    float amount;
    int count = 0;

    while (1) {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);

        if (amount <= 0) {
            break;
        }

        if (amount <= balance) {
            balance -= amount;
            count++;
        } else {
            printf("Insufficient balance!\n");
        }
    }

    printf("Remaining Balance: %.2f\n", balance);
    printf("Total Withdrawals: %d\n", count);

    return 0;
}
