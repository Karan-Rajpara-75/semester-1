// Print number and its square root for 0 to 9. 
#include <stdio.h>
#include <math.h>

int main() {
    int i;

    printf("Number\tSquare Root\n");
    printf("---------------------\n");

    for (i = 0; i <= 9; i++) {
        printf("%d\t%.2f\n", i, sqrt(i));
    }

    return 0;
}