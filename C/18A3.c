#include <stdio.h>
float interest(float p, float r, float t)
{
    return (p*r*t)/100;
}
void main()
{
    float p, r, t;
    printf("enter p:");
    scanf ("%f", &p);
    printf("enter r:");
    scanf ("%f", &r);
    printf("enter t:");
    scanf ("%f", &t);
    printf("interest: %.4f\n", interest(p,r,t));
}