// Name: Ronny Odhiambo Okinyi
// Reg : BCS-05-0540/2026
// Date : 6/10/2026

#include <stdio.h>

int main() {
    float height;
    double bankBalance;
    char phoneNumber[20];

    // Prompt user for input
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Kenya Shillings): ");
    scanf("%lf", &bankBalance);

    printf("Enter your phone number: ");
    scanf("%19s", phoneNumber);

    // Display the entered details 
    printf("\n--- User Details ---\n");
    printf("Height:       %.2f m\n", height);
    printf("Bank Balance: KSh %.2f\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}
