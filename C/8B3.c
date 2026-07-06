// Print first 50 numbers in series 1, 4, 7, 10… 
#include <stdio.h>

int main() {
    int i, num = 1;

    printf("First 50 numbers of the series 1, 4, 7, 10...\n");

    for (i = 1; i <= 50; i++) {
        printf("%d ", num);
        num += 3; 
    }

    return 0;
}