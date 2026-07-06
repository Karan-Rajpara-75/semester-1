// Add two numbers using function
#include <stdio.h>
int opp(int a, int b)
{
    return a + b;
}
void main()
{
    int a, b;
    printf("enter a number of a:");
    scanf("%d", &a);
    printf("enter a number of b:");
    scanf("%d", &b);
    printf("sum: %d\n", opp(a,b));
}