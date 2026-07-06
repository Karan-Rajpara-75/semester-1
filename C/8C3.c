//Take two numbers input from user and perform a division operation and find out quotient and reminder also note that a smaller number should divide a bigger number.
#include <stdio.h>

int main() {
    int num1, num2;
    int dividend, divisor;
    int quotient = 0, remainder;

    // Take input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure smaller number divides bigger number
    if (num1 > num2) {
        dividend = num1;
        divisor = num2;
    } else {
        dividend = num2;
        divisor = num1;
    }

    // Division by repeated subtraction
    remainder = dividend;
    while (remainder >= divisor) {
        remainder -= divisor;
        quotient++;
    }

    // Output result
    printf("Dividend = %d, Divisor = %d\n", dividend, divisor);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}