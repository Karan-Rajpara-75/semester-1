//4. Input an integer number and check the last digit of number is even or odd. 
#include <stdio.h>

int main() {
    int num, lastDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    if (lastDigit % 2 == 0) {
        printf("Last digit %d is EVEN.\n", lastDigit);
    }
    else {
        if (lastDigit % 2 != 0) {
            printf("Last digit %d is ODD.\n", lastDigit);
        }
    }

    return 0;
}
