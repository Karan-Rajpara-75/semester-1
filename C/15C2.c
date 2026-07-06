#include <stdio.h>
int main() {
    int n, i, j = 0, val, a[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &val);
    for(i = 0; i < n; i++)
        if(a[i] != val)
            a[j++] = a[i];
    printf("Count=%d\n", j);
    for(i = 0; i < j; i++)
        printf("%d ", a[i]);
}