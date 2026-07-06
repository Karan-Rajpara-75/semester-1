//2. Determine the roots of the equation ax2+bx+c=0. 
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;      
    float d;           
    float r1, r2;      
    float real, imag;  

    printf("Enter values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", r1, r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", r1);
    }
    else {
        real = -b / (2*a);
        imag = sqrt(-d) / (2*a);
        printf("Roots are complex.\n");
        printf("Root1 = %.2f + %.2fi\n", real, imag);
        printf("Root2 = %.2f - %.2fi\n", real, imag);
    }

    return 0;
}