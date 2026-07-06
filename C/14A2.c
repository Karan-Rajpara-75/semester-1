//2. Count number of positive or negative number from an array of n numbers.
#include <stdio.h>
void main()
{
   int i, n,p=0, j=0;
   printf("size of array:");
   scanf("%d", &n);
   int arry[n];
   for (i=1;i<=n;i++)
   {
    printf("enter a number:");
    scanf("%d", &arry[i]);
   }
   for(i=0; i<n; i++)
   {
    if (arry[i]>0)
    {
        p++;
    }
    else
    {
        j++;
    }
   }
   printf("%d %d", p, j);
}