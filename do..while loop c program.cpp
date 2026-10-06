// Name: Ronny Odhiambo Okinyi
// Reg : BCS-05-0540/2026
// Date : 6/10/2026


#include <stdio.h>

int main() {
    double mark;
    char choice;

    do {
        // Keep asking until a valid mark is entered
        do {
            printf("Enter student's mark (0-100): ");
            scanf("%lf", &mark);

            if (mark < 0 || mark > 100) {
                printf("Error: Invalid mark. Please enter a value between 0 and 100.\n\n");
            }
        } while (mark < 0 || mark > 100);

        char grade;
        if (mark >= 80) {
            grade = 'A';
        } else if (mark >= 70) {
            grade = 'B';
        } else if (mark >= 60) {
            grade = 'C';
        } else if (mark >= 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        printf("Mark: %.1f  Grade: %c\n", mark, grade);

        printf("\nEnter another student's mark? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended. Thank you!\n");

    return 0;
}