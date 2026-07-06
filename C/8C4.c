//Take two numbers input from user and perform a multiplication without using a * operator. 
#include <stdio.h>

int main() {
    int num1, num2, result = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // handle negative numbers properly
    int a = num1 < 0 ? -num1 : num1;
    int b = num2 < 0 ? -num2 : num2;

    for (int i = 0; i < b; i++) {
        result += a;
    }

    // if one number is negative, result should be negative
    if ((num1 < 0 && num2 > 0) || (num1 > 0 && num2 < 0)) {
        result = -result;
    }

    printf("Multiplication of %d and %d = %d\n", num1, num2, result);

    return 0;
}