#include <stdio.h>
#include <math.h>
void main()
{
    int n, i;
    float avg, geo, harm;
    float sum=0, gmul=1, hsum=0;
    float a[100];
    printf("enter a number:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        pritnf("enter a number:");
        scanf("%f", &a[i]);
        sum+= a[i];
        gmul*=a[i];
        hsum+=1/a[i];
    }
    avg =sum / n;
    geo = pow(gmul, 1.0/n);
    harm=n/hsum;
    printf("avg=%.2f\ngeo=%.2f\nharm=%.2f", avg, geo, harm);
}