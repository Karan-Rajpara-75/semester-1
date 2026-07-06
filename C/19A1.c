#include <stdio.h>
int facto(int n);
void main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    int factor = facto(n);
    printf("%d", factor);
}
int facto(int n)
{
    int i = 1, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}