//2. Print number of days in a month using switch.
#include <stdio.h>
void main()
{
    int day;
    printf("enter a number for particular day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
           printf("january");
        break; 
    case 2: 
           printf("frebuary");
        break; 
    case 3:
           printf("march");
        break; 
    case 4:
           printf("april");
        break; 
    case 5:
           printf("may");
        break; 
    case 6:
           printf("june");
        break; 
    case 7:
           printf("july");
        break; 
    case 8:
           printf("august");
        break; 
    case 9:
           printf("september");
        break; 
    case 10:
           printf("october");
        break; 
    case 11:
           printf("november");
        break; 
    case 12:
           printf("december");
        break; 
    default:
            printf("not velad number");
        break;
    }
}