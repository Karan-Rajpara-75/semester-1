//1. Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice 
 
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nChoose operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    if (choice == 1) {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    }
    else if (choice == 2) {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    }
    else {
        if (choice == 3) {
            result = num1 * num2;
            printf("Result = %.2f\n", result);
        }
        else {
            if (choice == 4) {
                if (num2 != 0)
                    printf("Result = %.2f\n", num1 / num2);
                else
                    printf("Error: Division by zero.\n");
            }
            else {
                printf("Invalid Choice!\n");
            }
        }
    }

    return 0;
}
