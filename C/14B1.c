#include <stdio.h>
void main()
{
    int n, i, count=0;
    float avg, sum=0;
    int a[100];
    printf("enter a nuber:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("enter a number:");
        scanf("%d",&a[i]);
        sum += a[i];
    }
    avg = sum / n;
    for(i=0;i<n;i++)
        if (a[i] > avg)
        count++;
    printf("%d", count);
}
