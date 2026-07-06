#include <stdio.h>
void main()
{
    int i, j, s;
    for(i=0;i<5;i++)
    {
        for(s=5;s>i;s--)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}