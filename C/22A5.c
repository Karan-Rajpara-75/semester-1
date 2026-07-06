#include <stdio.h>
int main()
{
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("copy.txt", "w");
    char ch;
    if (!src || !dest)
    {
        printf("File error!\n");
        return 1;
    }
    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);
    fclose(src);
    fclose(dest);
    printf("File copied!\n");
    return 0;
}
