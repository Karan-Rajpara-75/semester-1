// Print all integer greater then 100 and less than 200 that are divisible by 7 but not divisible by 5. 
#include <stdio.h>

int main() {
    int i;

    printf("Numbers greater than 100 and less than 200\n");
    printf("that are divisible by 7 but not divisible by 5:\n");

    for (i = 101; i < 200; i++) {
        if (i % 7 == 0 && i % 5 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}