//5. Print area of circle. (pie*r*r) 

#include <stdio.h>
#define PI 3.14159

int main() {
    float r, area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    area = PI * r * r;

    printf("Area of circle with radius %.2f is: %.2f\n", r, area);
    return 0;
}
