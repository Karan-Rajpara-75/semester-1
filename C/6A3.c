//3. Check whether the entered character is upper case, lower case, digit or any special character. 
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Character is UPPERCASE.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Character is LOWERCASE.\n");
    }
    else {
        if (ch >= '0' && ch <= '9') {
            printf("Character is DIGIT.\n");
        }
        else {
            printf("Character is SPECIAL CHARACTER.\n");
        }
    }

    return 0;
}
