//3. Print numbers between two given numbers which is divisible by 2.
#include <stdio.h>
void main() {
    int start, end, i;
    printf("Enter two numbers (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Even numbers between %d and %d are:\n", start, end);
    for(i = start; i <= end; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}