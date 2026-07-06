#include <stdio.h>
void main()
{
    int n, i, a[100], b[100];
    printf("enter a n:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter a number:");
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
    }
    for(i=0; i<n; i++)
    {
        printf("%d", b[i]);
    }
}