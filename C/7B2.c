//2. Check whether character is an alphabet or not using conditional operator.
#include <stdio.h>
void main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Using conditional operator to check alphabet
    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        ? printf("%c is an Alphabet\n", ch) 
        : printf("%c is NOT an Alphabet\n", ch);
}