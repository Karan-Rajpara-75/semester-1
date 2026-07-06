#include <stdio.h>

void replaceChar(char str[], char oldCh, char newCh)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == oldCh)
        {
            str[i] = newCh;
        }
    }
}

int main()
{
    char str[100], oldCh, newCh;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to replace: ");
    scanf("%c", &oldCh);

    getchar();

    printf("Enter new character: ");
    scanf("%c", &newCh);

    replaceChar(str, oldCh, newCh);

    printf("Updated string: %s", str);

    return 0;
}
