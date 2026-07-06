/*Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class 
between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 70.*/
#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, total;
    float percent;

    printf("Enter marks of 5 subjects (out of 100):\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percent = total / 5.0;

    printf("Percentage = %.2f\n", percent);

    if (percent < 35) {
        printf("Result: FAIL\n");
    }
    else if (percent >= 36 && percent <= 45) {
        printf("Result: PASS CLASS\n");
    }
    else {
        if (percent <= 60 && percent >= 69) {
            printf("Result: SECOND CLASS\n");
        }
        else {
            if (percent <= 70 && percent <=100) {
                printf("Result: FIRST CLASS\n");
            }
            else {
                printf("Result: DISTINCTION\n");
            }
        }
    }

    return 0;
}
