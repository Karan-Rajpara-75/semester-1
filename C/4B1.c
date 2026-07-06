//1. Print area of triangle. ((height*base)/2)  

#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area of Triangle = %f\n", area);

    return 0;
}
