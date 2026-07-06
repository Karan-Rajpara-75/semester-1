#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int c, prev = ' ';
    if (!in || !out) {
        printf("File error!\n");
        return 1;
    }
    while ((c = fgetc(in)) != EOF) {
        if (prev == ' ' || prev == '\n' || prev == '\t')
            c = toupper(c);
        fputc(c, out);
        prev = c;
    }
    fclose(in);
    fclose(out);
    return 0;
}
