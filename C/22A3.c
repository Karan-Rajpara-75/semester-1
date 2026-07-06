#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("demo.txt", "w+");
    fprintf(fp, "Hello 123\n");
    rewind(fp);
    char str[20];
    int num;
    fscanf(fp, "%s %d", str, &num);
    printf("Read using fscanf: %s %d\n", str, num);
    fputc('A', fp);
    rewind(fp);
    printf("Characters in file:\n");
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fseek(fp, 0, SEEK_END);
    printf("\nPosition after fseek(end): %ld\n", ftell(fp));
    fclose(fp);
    return 0;
}