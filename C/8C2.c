// Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.  
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i * i;   // add square of i
    }

    printf("Sum of series 1^2 + 2^2 + ... + %d^2 = %d\n", n, sum);

    return 0;
}