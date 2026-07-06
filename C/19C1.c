#include <stdio.h>

int reverseNumber(int num);   // Function declaration

int main() {
    int num, rev;

    printf("Enter any number: ");
    scanf("%d", &num);

    rev = reverseNumber(num);    // Function call

    printf("Reverse of %d is %d\n", num, rev);

    return 0;
}

// Recursive function to reverse number
int reverseNumber(int num) {
    static int rev = 0;    // Stores reverse number through recursive calls
    if (num == 0)
        return rev;

    rev = rev * 10 + (num % 10);
    return reverseNumber(num / 10);   // Recursive call
}
