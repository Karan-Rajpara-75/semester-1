#include <stdio.h>
void main()
{
    int i, j, sum = 0, c, r;
    int a[2][2] = {1, 2, 3, 4}, b[2][1] = {1, 2}, s[2][2];
    for (i = 0; i < 2; i++)
    {
        c = 0;
        r = 0;
        for (j = 0; j < 1; j++)
        {
            sum = sum + (a[i][c] * b[r][j]);
            c++;
        }
    }
}