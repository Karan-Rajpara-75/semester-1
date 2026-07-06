#include <stdio.h>
void main()
{
    int n, i ,num1, num2, temp, lcm, hcf;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("enter a number: ");
    scanf("%d", &i);
    num1 = n;
    num2 = i;
    while (b!=0)
    {
        temp = i;
        i = n % i;
        n = temp;        
    }
    hcf = n;
    lcm = (n * i) / hcf;
    printf("hcf (gcd) of %d and %d = %d\n", num1, num2, hcf);
    printf("lcm of %d and %d = %d\n", num1, num2, lcm);
}