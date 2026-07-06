//1. Print day name of week using switch.
#include <stdio.h>
void main()
{
    int day;
    printf("enter a number for particular day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
           printf("monday");
        break; 
    case 2: 
           printf("tuseday");
        break; 
    case 3:
           printf("wednesday");
        break; 
    case 4:
           printf("thrushday");
        break; 
    case 5:
           printf("friday");
        break; 
    case 6:
           printf("saturday");
        break; 
    case 7:
           printf("sunday");
        break; 
    default:
            printf("not velad number");
        break;
    }
}