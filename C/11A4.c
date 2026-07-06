#include <stdio.h>
void main()
{
    int i, x, y, r = 1;
    printf("enter a number(x):");
    scanf("%d", &x);
    printf("enter a number(y):");
    scanf("%d", &y);
    for ( i = 1; i <= y; i++)
    {
        r = r * x;
    }
    printf("%d^%d = %d", x, y, r);
}