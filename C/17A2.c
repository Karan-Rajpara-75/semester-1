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

    float a, *ptr;
    printf("enter a number of a:");
    scanf("%f", &a);
    ptr = &a;
    //value
    printf("%f", *ptr);
    //address
    printf("%f", ptr);

    double a, *ptr;
    printf("enter a number of a:");
    scanf("%lf", &a);
    ptr = &a;
    //value
    printf("%lf", *ptr);
    //address
    printf("%lf", ptr);

    char a, *ptr;
    printf("enter a number of a:");
    scanf("%d", &a);
    ptr = &a;
    //value
    printf("%d", *ptr);
    //address
    printf("%d", ptr);
}