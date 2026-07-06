#include <stdio.h>
void main()
{
    int n, i, count=0,h, w;
    printf("enter a number:");
    scanf("%d", &n);
    printf("size of arry:");
    scanf("%d", &i);
    int h[h], w[w];
    for(i=0;i<h;i++)
    {
        printf("enter a number of height:");
        scanf("%d", &h[i]);
    }
    for(i=0;i<w;i++)
    {
        printf("enter a number of weight:");
        scanf("%d", &w[i]);
    }
    for(i=0;i<n;i++)
    {
        if(h[i]>170 && w[i]<50)
        {
            count++;
        }
    }
}