#include <stdio.h>
int main() {
    FILE *f1 = fopen("f1.txt", "r");
    FILE *f2 = fopen("f2.txt", "r");
    FILE *out = fopen("merged.txt", "w");
    char line[200];
    if (!f1 || !f2 || !out) {
        printf("File error!\n");
        return 1;
    }
    while (!feof(f1) || !feof(f2)) {
        if (fgets(line, 200, f1))
            fputs(line, out);
        if (fgets(line, 200, f2))
            fputs(line, out);
    }
    fclose(f1);
    fclose(f2);
    fclose(out);
    return 0;
}
