#include <stdio.h>
void main()
{
    int x,y,i, result = 1, temp;
    printf("enter a number:");
    scanf("%d", &x);
    printf("enter a number:");
    scanf("%d", &y);
    for (i = 1; i <= y; i++)
    {
        temp = 0;
        for (int j; j++)
        {
            temp*= x;           
        }
        result = temp;

    }
    printf("%d\n", result);
}   