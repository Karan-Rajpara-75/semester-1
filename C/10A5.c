#include <stdio.h>
void main()
{
    int n, rev;
    printf("enter a n: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    printf("%d\n", rev);
    return 0;
}