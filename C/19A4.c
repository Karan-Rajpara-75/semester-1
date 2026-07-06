#include <stdio.h>
int findChar(char str[], char ch)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char str[100], ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to find: ");
    scanf("%c", &ch);

    int pos = findChar(str, ch);

    if (pos == -1)
        printf("Character '%c' NOT found in the string.\n", ch);
    else
        printf("Character '%c' found at position %d\n", ch, pos + 1);

    return 0;
}
