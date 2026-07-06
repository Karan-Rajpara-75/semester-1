#include <stdio.h>
float max(float a,float b,float c)
{
     return (a > b) ? ((a > c) ? a:c):((b > c) ? b:c);
}
void main()
{
    float a, b, c;
    printf("enter a number(a): ");
    scanf("%f", &a);
    printf("enter a number(b): ");
    scanf("%f", &b);
    printf("enter a number(b): ");
    scanf("%f", &c);
    printf("max: %.2f\n",max(a,b,c));
}