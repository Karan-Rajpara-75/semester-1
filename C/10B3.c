//Check whether the given number is palindrome or not
#include <stdio.h>
void main()
{
    int rev,n, temp;
    printf("enter a n: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    if(n == rev)
    {
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}