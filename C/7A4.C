// 4. Find out largest number from given 3 numbers using conditional operator. 
#include <stdio.h>
int main()
{
    int a, b, c, largest = 0;
    printf("enter a number(a): ");
    scanf("%d", &a);
    printf("enter a number(b): ");
    scanf("%d", &b);
    printf("enter a number(b): ");
    scanf("%d", &b);

    //using conditionnal operator
    largest = (a > b) ? ((a > c) ? a:c):((b > c) ? b:c);
    printf("the largest number is: %d\n",largest);
    return 0;
}