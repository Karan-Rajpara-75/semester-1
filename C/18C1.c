#include <stdio.h>

int mystrlen(char s[]) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

void mystrcpy(char d[], char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

void mystrcat(char d[], char s[]) {
    int i = 0, j = 0;
    while (d[i] != '\0') i++;
    while (s[j] != '\0') {
        d[i++] = s[j++];
    }
    d[i] = '\0';
}
int mystrcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    int ch;
    char str1[100], str2[100], res[100];
    while (1) {
        printf("\n1.Length\n2.Copy\n3.Concat\n4.Compare\n5.Exit\nEnter choice: ");
        scanf("%d", &ch);
        if (ch == 5) break;
        switch (ch) {
            case 1:
                printf("Enter string: ");
                scanf("%s", str1);
                printf("Length: %d\n", mystrlen(str1));
                break;
            case 2:
                printf("Enter string: ");
                scanf("%s", str1);
                mystrcpy(res, str1);
                printf("Copied string: %s\n", res);
                break;
                            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                mystrcat(str1, str2);
                printf("Concatenated: %s\n", str1);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                printf("Result: %d\n", mystrcmp(str1, str2));
                break;
        }
    }
    return 0;
}