// Calculate sum of two numbers using pointer. 
#include <stdio.h>
void main()
{
    int  *ptr1, *ptr2, a, b, sum=0;
    printf("enter a number:");
    scanf("%d", &a);
    printf("enter a number:");
    scanf("%d", &b);
    ptr1 = &a;
    ptr2 = &b;
    sum = (*ptr1) + (*ptr2);
    printf("%d", sum);
}