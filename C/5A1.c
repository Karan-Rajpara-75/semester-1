//1. Print given feet into inches. (inches = feet*12)  
#include <stdio.h>

int main() {
    float feet, inches;
    printf("Enter length in feet: ");
    scanf("%f", &feet);

    if (feet >= 0) {
        inches = feet * 12;
        printf("%.2f feet = %.2f inches\n", feet, inches);
    }
    else {
        printf("Invalid input! Feet cannot be negative.\n");
    }

    return 0;
}
