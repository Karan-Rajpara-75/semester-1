#include <stdio.h>
void main()
{
    int num, first, last, temp, sum;
    printf("enter a number:");
    scanf("%d", &num);
    temp=num;
    last=temp%10;
    while (temp>=10)
    {
        temp = temp / 10;
    }
    first=temp;
    sum = first + last;
    printf("the fist:%d\n last number:%d of sum is:%d", first,last,sum);
    
}