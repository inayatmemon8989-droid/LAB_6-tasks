#include <stdio.h>

int main() {
    float price, total = 0, discount = 0, final_amount;
    int choice;

    do {
        printf("Enter item price: ");
        scanf("%f", &price);

        total += price;

        printf("Add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    if (total > 10000) {
        discount = total * 0.10;
    }

    final_amount = total - discount;

    printf("Total Price: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", final_amount);

    return 0;
}
