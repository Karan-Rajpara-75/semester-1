#include <stdio.h>
void main()
{
   int i, n,odd=0, even=0;
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
    if (arry[i]%2==0)
    {
       even++;
    }
    else
    {
        odd++;
    }
   }
   printf("%d %d", even, odd);
}