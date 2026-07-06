//1. Read n numbers from user and print in normal and reverse order.
#include <stdio.h>
void main()
{     
    int n,i;
    printf("size a arry:");
    scanf("%d", &n);
    int arr[n];
    //normal order
    for(i=1;i<=n;i++)
    {
        printf("enter a number of arry:");
        scanf("%d", &arr[i]);
    }
    printf("normal order\n");
   for(i=1;i<=n;i++)
   {
        printf("%d  ", arr[i]);
   }
   printf("\n");
   //revers order
    printf("revers order\n");
    for(i=1;i<=n;i++)
    {
        printf("%d   ", arr[n+1-i]);
    }
    
}