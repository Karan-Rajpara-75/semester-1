#include <stdio.h>
int main() {
    int n, i, j, val, a[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &val);
    for(i = 0; i < n; i++)
        if(val < a[i])
            break;
    for(j = n; j > i; j--)
        a[j] = a[j - 1];
    a[i] = val;
    n++;
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}