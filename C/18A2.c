#include <stdio.h>
int max(int a, int b)
{
    if (a<b)
    {
        return b;
    }
    else
    {
        return a;
    }
     
}
int min(int a, int b)
{
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void main()
{
    int a, b;
    printf("enter a number:");
    scanf ("%d", &a);
    printf("enter a number:");
    scanf ("%d", &b);
    printf("max: %d\n", max(a,b));
    printf("min: %d\n", min(a,b));
}
