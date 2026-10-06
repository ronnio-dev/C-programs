// Name: Ronny Odhiambo Okinyi
// Reg : BCS-05-0540/2026
// Date : 6/10/2026

#include <stdio.h>

int main() {
    double units[10];

    // Input loop: prompt user to enter units for 10 households
    printf("--- Enter Electricity Consumption for 10 Households ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter units consumed for Household %d: ", i + 1);
        scanf("%lf", &units[i]);
    }

    // Output loop: display household number and units consumed
    printf("\n--- Household Electricity Consumption Summary ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Household %d: %.2f units\n", i + 1, units[i]);
    }

    return 0;
}