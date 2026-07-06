// Calculate sum and average of the square of ƒrst 10 integers whose square has last digit 3.
#include <stdio.h>

int main() {
    int n = 1, count = 0;
    int sum = 0;
    float average;

    printf("Squares ending with digit 3:\n");

    while (count < 10) {
        int sq = n * n;

        if (sq % 10 == 3) {   // check last digit
            printf("%d^2 = %d\n", n, sq);
            sum += sq;
            count++;
        }
        n++;
        
        // safety check: break if not possible
        if (n > 1000) { 
            break;
        }
    }

    if (count > 0) {
        average = (float)sum / count;
        printf("\nSum = %d\nAverage = %.2f\n", sum, average);
    } else {
        printf("\nNo integers exist whose square ends with 3.\n");
    }

    return 0;
}