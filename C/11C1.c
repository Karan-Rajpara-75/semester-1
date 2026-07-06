#include <stdio.h>
void main()
{
    int n,f,l,t,p=1;
    printf("entre a number: ");
    scanf("%d", &n);
    t = n;
    l = t % 10;
    while (t>=10)
    {
        t/=10;
        p*=10;
    }
    f=t;
    n = n % p;
    n = n / 10;
    n = l * p + n *10 +f;
    printf("%d\n", n);
}