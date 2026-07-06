#include <stdio.h>
int main()
{
    int n, fc=1,i=1;
    printf("enter a number:");
    scanf("%d", &n);
    while (i<=n)
    {
        fc = fc * i;
        i++;
    }
    printf("%d\n",fc);
}