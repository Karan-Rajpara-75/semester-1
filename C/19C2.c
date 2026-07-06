#include <stdio.h>

long long fact(int n) {
    long long f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

long long nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

long long nPr(int n, int r) {
    return fact(n) / fact(n - r);
}

int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (r > n)
        printf("Invalid! r <= n required.\n");
    else {
        printf("nCr = %lld\n", nCr(n, r));
        printf("nPr = %lld\n", nPr(n, r));
    }
    return 0;
}
