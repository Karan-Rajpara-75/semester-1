#include <stdio.h>
void mano(int arry[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", arry[i]);
    }
}
void main()
{
    int n, i;
    printf("arry size:");
    scanf("%d", &n);
    int arry[n];
    for (i = 0; i < n; i++)
    {
        printf("enter a number:");
        scanf("%d", &arry[i]);
    }
    mano(arry, n);
}