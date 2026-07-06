#include <stdio.h>
void swap_by_value(int a, int b)
{
    int temp = a;
    a=b;
    b=temp;
    printf("after swap : a=%d, b=%d\n", a, b);
}
void swap_reference(int *a, int *b)
{
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("enter a number:");
    scanf("%d", &a);
    printf("enter a number:");
    scanf("%d", &b);
    swap_by_value(a,b);
    printf("%d %d", a,b);
    swap_reference(a,b);
    printf("%d %d", a, b);
}