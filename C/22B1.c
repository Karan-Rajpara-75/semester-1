#include <stdio.h>
int main()
{
    FILE *fp = fopen("input.txt", "r");
    long pos;
    if (!fp)
    {
        printf("File error!\n");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    while (pos-- > 0)
    {
        fseek(fp, pos, SEEK_SET);
        putchar(fgetc(fp));
    }
    fclose(fp);
    return 0;
}
