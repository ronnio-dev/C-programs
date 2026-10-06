// Name: Ronny Odhiambo Okinyi
// Reg : BCS-05-0540/2026
// Date : 6/10/2026


#include <stdio.h>

#define PI 3.142

int main() {
    double radius, height, volume, surface_area;

    // Prompt user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate Volume
    volume = PI * radius * radius * height;

    // Calculate Surface Area
    surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);

    // Display the results
    printf("\n--- Cylinder Results ---\n");
    printf("Volume:       %.2f\n", volume);
    printf("Surface Area: %.2f\n", surface_area);

    return 0;
}
