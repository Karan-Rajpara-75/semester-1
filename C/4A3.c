//3. Print addition of 2 numbers. (with & without scanf)  
#include <stdio.h>
void main()
{    //without
    int a=10, b=5, sum =0;
    sum = a + b;
    printf("%d", sum); 
    //with
    int a, b;
    printf("enter a two number:");
    scanf("%d %d", a, b);
    printf("%d + %d = %d\n", a, b, a+b);
}
