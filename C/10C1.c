#include <stdio.h>
#include <math.h>
void main()
{
    int n, i=0, a, b;
    float result=0.0;
    printf("enter a number: ");
    scanf("%d", &n);
    while (a!=0)
    {
        a /= 10;
        ++n;
    }
    a = n;
    while (a!=0)
    {
        b = a % 10;
        result += pow(b , n);
        a /= 10; 
    }
    if((int)result == n)
    {
        printf("%d is an armstrong number. \n", n);
    }
    else
    {
         printf("%d is not armstrong number. \n", n);
    }
    
}