//Print digits of given number
#include <stdio.h>
void main()
{
    int n;
    printf("enter a n: ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d\n", n % 10);
        n = n / 10;
    }
    return 0;
}