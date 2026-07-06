#include <stdio.h>

struct S {
    int a;
    float b;
};

union U {
    int a;
    float b;
};

int main() {
    struct S s1;
    union U u1;

    printf("Size of structure = %lu\n", sizeof(s1));
    printf("Size of union     = %lu\n\n", sizeof(u1));

    printf("--- Structure Example ---\n");
    s1.a = 10;
    s1.b = 20.5;
    printf("s1.a = %d\n", s1.a);
    printf("s1.b = %.2f\n", s1.b);

    printf("\n--- Union Example ---\n");
    u1.a = 10;
    printf("u1.a = %d\n", u1.a);

    u1.b = 20.5; // overwrites u1.a
    printf("u1.b = %.2f\n", u1.b);

    return 0;
}
