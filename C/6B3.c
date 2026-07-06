#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {  
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a==b || b==c || c==a) {
            printf("Iscosclae Tringle\n");
        }
        else {
            printf("Scalen Tringle\n");
        }
     else {
        printf("Not VAlid Tringle\n");
     }
    }
}