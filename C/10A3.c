#include <stdio.h>
void main()
{
    int i=2, prime=1,n;
    printf("enter a n:");
    scanf("%d", &n);
    while (i<=n/2)
    {
        if (n%i==0)
        {
            prime=0;
            break;
        }
        i++;
    }if (n>1 && n==1)
    {
        printf("prime");
    }
    else
    {
         printf("not prime");
    }
}