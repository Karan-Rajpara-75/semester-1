#include <stdio.h>
void main()
{
    int i, j;
    int student[20][2];
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("enter a number:");
            scanf("%d", &student[i][j]);
        }
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", student[i][j]);
        }
    }
    printf("\n");
}