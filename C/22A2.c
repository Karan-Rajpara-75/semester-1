#include <stdio.h>

int main()
{
    FILE *fp = fopen("input.txt", "r");
    char ch;
    int chars = 0, spaces = 0, tabs = 0, lines = 0;
    if (fp == NULL)
    {
        printf("File not found!\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;
        if (ch == ' ')
            spaces++;
        if (ch == '\t')
            tabs++;
        if (ch == '\n')
            lines++;
    }
    fclose(fp);
    printf("Characters: %d\nSpaces: %d\nTabs: %d\nNew lines: %d\n",
           chars, spaces, tabs, lines);
    return 0;
}
