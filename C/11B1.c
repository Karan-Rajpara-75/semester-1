#include <stdio.h>
void main()
{
    int n, i, a = 0, b = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("\n");
}
