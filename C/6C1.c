#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        printf("Second largest = %d\n", a);
    }
    else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        printf("Second largest = %d\n", b);
    }
    else {
        printf("Second largest = %d\n", c);
    }

    return 0;
}
