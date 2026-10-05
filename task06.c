#include <stdio.h>

int main() {
    int pin;
    int attempts = 0;

    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == 1234) {
            printf("Login Successful\n");
            return 0;
        } else {
            attempts++;
            printf("Incorrect PIN. Remaining attempts: %d\n", 3 - attempts);
        }
    }

    printf("Account Locked\n");

    return 0;
}
