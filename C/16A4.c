#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], sum = 0, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter a number a:");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enter a number b:");
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d = %d + %d", sum = a[i][j] + b[i][j]);
        }
    }
    printf("\n");
}