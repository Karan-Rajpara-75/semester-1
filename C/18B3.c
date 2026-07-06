#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) return 0;
    return 1;
}

void primeInRange(int a, int b) {
    for (int i = a; i <= b; i++)
        if (isPrime(i)) printf("%d ", i);
}

int main() {
    int a, b;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);
    primeInRange(a, b);
    return 0;
}