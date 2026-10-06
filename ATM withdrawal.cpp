// Name : Ronny Odhiambo Okinyi
// Reg : BCS-05-0540/2026
// Date : 6/10/2026


#include <stdio.h>

int main() {
    double balance = 50000.0;
    double amount;

    printf("Welcome to the ATM\n");
    printf("Initial balance: KSh %.2f\n", balance);

    printf("\nEnter withdrawal amount (0 to exit): KSh ");
    scanf("%lf", &amount);

    while (amount != 0 && amount <= balance) {
        if (amount < 0) {
            printf("Invalid amount. Please enter a positive value.\n");
        } else {
            balance -= amount;
            printf("Withdrawal successful. Remaining balance: KSh %.2f\n", balance);
        }

        printf("\nEnter withdrawal amount (0 to exit): KSh ");
        scanf("%lf", &amount);
    }

    if (amount == 0) {
        printf("\nThank you for using our ATM. Final balance: KSh %.2f\n", balance);
    } else {
        printf("\nInsufficient funds! You tried to withdraw KSh %.2f but your balance is KSh %.2f.\n", amount, balance);
        printf("Transaction ended.\n");
    }

    return 0;
}