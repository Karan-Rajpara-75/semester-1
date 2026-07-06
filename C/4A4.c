//4. Print average of three numbers. (with & without scanf)  

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    float avg = (a + b + c) / 3.0;

    printf("The average of %d, %d, and %d is: %.2f\n", a, b, c, avg);
    return 0;
}
