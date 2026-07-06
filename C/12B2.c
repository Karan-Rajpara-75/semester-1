#include <stdio.h>
void main()
{
    float i,j,n,e=1,temp;
    printf("enter a number:");
    scanf("%f", &n);
    for(i = 1; i < n; i++)
    {
        temp = 1;
        for(j = 1; j <= i; j++)
        {
              temp = temp * j;
        }
        e = e + (1/temp) ;
    }
    printf("%f", e);
}