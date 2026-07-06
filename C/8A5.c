//Get 10 numbers from user print count of odd, even numbers 
#include <stdio.h>

int main() {
    int i, num;
    int evenCount = 0, oddCount = 0;

    printf("Enter 10 numbers:\n");
    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Count of Even numbers = %d\n", evenCount);
    printf("Count of Odd numbers = %d\n", oddCount);

    return 0;
}