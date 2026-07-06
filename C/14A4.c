#include <stdio.h>
void main()
{
    int  i, n, sum=0;
    float avg;
    printf("size of arry:");
    scanf("%d", &n);
    int arry[n], max= arry[0], min = arry[0];
    for (i=0; i<n; i++)
    {
        printf("enter a number:");
        scanf("%d", &arry[i]);
    }
    //max
    for(i=0; i<n; i++)
    {
        if (max<arry[i])
        {
            max=arry[i];
        }
    }
    //min
    for(i=0; i<n; i++)
    {
        if (min>arry[i])
        {
            min=arry[i];
        }
    }
    //sum
    for(i=0;i<n;i++)
    {
        sum=sum+arry[i];
    }
    //avg
    avg=sum/n;
    printf("%d %d %d %f", max,min,sum,avg); 
}