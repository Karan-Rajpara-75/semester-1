#include <stdio.h>
void main()
{
    int n,i, count=0,a[100];
    printf("enter anumber:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter a number(v):");
        scanf("%d", &a[i]);
        if(a[i]%3==0)
        {
            count++;
        }
    }
    printf("%d", count);
}