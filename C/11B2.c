#include <stdio.h>
void main()
{
    int num, temp, i, d, count;
    printf("enter a number:");
    scanf("%d", &num);
    for ( i = 1; i<=9; i++)
    {
        temp = num;
        const=0;
        while (temp > 0)
        {
            d = temp % 10;
            if (d = i)
            {
                count++;
                temp/=10;
            }
            
        }
        if (count > 0)
        {
            printf("%d -> %d times\n", d, count);
        }
        
        
    }
    
}