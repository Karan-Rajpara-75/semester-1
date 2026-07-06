//1. Read 3 numbers, multiply largest number from first two numbers to third one using conditional.
#include <stdio.h>
void main() {
    int a, b, c, largest, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest between a and b using conditional operator
    largest = (a > b) ? a : b;

    // Multiply largest with c
    result = largest * c;

    printf("Largest of first two numbers: %d\n", largest);
    printf("Multiplication of largest and third number: %d\n", result);
}