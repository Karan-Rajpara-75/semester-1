#include <stdio.h>
void main()
{
    int n, i, key, found=0, a[100];
    printf("enter a number:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
        printf("enter a number:");
        scanf("%d", &a[i]);
        printf("enter a key:");
        scanf("%d", &key);
        for(i=0;i<n;i++)
            if(a[i]==key)
            {
                found = 1;
                
            }
            if (found)
            {
                printf("found at position:%d", i+1);
            }
            else
            {
                printf("not found");
            }
}