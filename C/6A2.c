//2. Enter basic salary of an employee and calculate Gross salary according to given conditions: -  Basic Salary >= 10000: HRA = 20% of basic, DA = 80% of basic - Basic Salary >= 20000: HRA = 25% of basic, DA = 90% of basic - Basic Salary >= 30000: HRA = 30% of basic, DA = 95% of basic 
#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    if (basic >= 30000) {
        hra = 0.30 * basic;
        da  = 0.95 * basic;
    }
    else if (basic >= 20000) {
        hra = 0.25 * basic;
        da  = 0.90 * basic;
    }
    else {
        if (basic >= 10000) {
            hra = 0.20 * basic;
            da  = 0.80 * basic;
        }
        else {
            hra = 0.15 * basic;
            da  = 0.70 * basic;
        }
    }

    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
