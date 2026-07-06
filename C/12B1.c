#include <stdio.h>
void main()
{
    int i, n, j, sum = 0, team;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        team =0;
        for (j = 1; j <= i; j++)
        {
            team += j;
        }
        sum += team;
    }
    printf("%d\n", sum);
}