#include <stdio.h>
void main()
{
    int i, j, n, arry[100][100];
    printf("enter a n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("enter a number of a arry:");
            scanf("%d", &arry[i][j]);
        }
    }
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d      ", arry[i][j]);
        }
        printf("\n");
    }
}