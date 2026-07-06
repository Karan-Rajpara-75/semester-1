#include <stdio.h>
#include <string.h>
int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    char line[200];
    int count = 0;
    if (!in || !out) {
        printf("File error!\n");
        return 1;
    }
    while (fgets(line, 200, in)) {
        if (strcmp(line, "\n") == 0) continue;
        count++;
        fputs(line, out);
        if (count == 3)
            fputc('\n', out);
    }
    fclose(in);
    fclose(out);
    return 0;
}
