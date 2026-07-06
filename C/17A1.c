// Print value and address of a variable.
#include <stdio.h>
void main()
{
    int a, *ptr;
    printf("enter a number of a:");
    scanf("%d", &a);
    ptr = &a;
    //value
    printf("%d", *ptr);
    //address
    printf("%d", ptr);
}