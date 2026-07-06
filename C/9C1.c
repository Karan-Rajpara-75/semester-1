// Convert given number in words. (i.e. n=3456  output: Three Four Five Six) 
#include <stdio.h>
int main() {
    int n, reversed = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0) {
        printf("Zero\n");
        return 0;
    }
    temp = n;
    while(temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    printf("Number in words: ");
    while(reversed != 0) {
        int digit = reversed % 10;
        switch(digit) {
            case 0: 
                  printf("Zero ");
                   break;
            case 1:
                 printf("One "); 
                 break;
            case 2: 
                  printf("Two "); 
                  break;
            case 3: 
                 printf("Three ");
                  break;
            case 4:
                   printf("Four ");  
                   break;
            case 5:
                   printf("Five ");
                    break;
            case 6:
                    printf("Six ");
                     break;
            case 7: 
                   printf("Seven ");
                    break;
            case 8:
                   printf("Eight "); 
                    break;
            case 9: 
                   printf("Nine "); 
                   break;
        }
        reversed /= 10;
    }

    printf("\n");
    return 0;
}