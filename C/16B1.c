#include <stdio.h>
void main()
{
    int i, j, m, z = 0, o = 0, n;
    printf("enter a size of matrix:");
    scanf("%d", &n);
    int arry[n][n], non[n][n];
    printf("\n------your matrix------\n\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter a matrix number:");
            scanf("%d", &arry[i][j]);
        }
    }
    printf("\n------your matrix------\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", arry[i][j]);
        }
        printf("\n");
    }
    printf("you changes your matrix\n");
    printf("yes=====1");
    printf("no===0");
    printf("your ans:");
    scanf("%d", &m);
    if (m == 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (arry[i][j] == 0)
                {
                    z++;
                }
                else
                {
                    o++;
                }
            }
        }
        printf("your ans ----->   ");
        if (z > o)
        {
            printf("Transpose of a matrix");
        }
        else
        {
            printf("not Transpose of a matrix");
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("enter a matrix number:");
                scanf("%d", &non[i][j]);
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (non[i][j] == 0)
                {
                    z++;
                }
                else
                {
                    o++;
                }
            }
        }
        printf("your ans ----->   ");
        if (z > o)
        {
            printf("Transpose of a matrix");
        }
        else
        {
            printf("not Transpose of a matrix");
        }
    }
}