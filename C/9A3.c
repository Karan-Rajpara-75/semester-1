#include <stdio.h>
int main()
{
    int x, y, result=1, i=1;
    printf("enter a number of x:");
    scanf("%d", &x);
    printf("enter a number of y:");
    scanf("%d", &y);
    while (i<=y)
    {
        result = result * x;
        i++;
    }
    printf("%d ^ %d = %d\n",x,y,result);
}