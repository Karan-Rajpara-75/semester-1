#include <stdio.h>

// Manual strlen()
int myStrlen(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Manual strcpy()
void myStrcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';   // Add null at end
}

// Manual strcmp()
int myStrcmp(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];   // Non-zero → not equal
        i++;
    }
    return s1[i] - s2[i]; // Also handles different length
}

int main() {
    char str1[100], str2[100], copy[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    printf("\nLength of str1 = %d", myStrlen(str1));
    printf("\nLength of str2 = %d", myStrlen(str2));

    myStrcpy(copy, str1);
    printf("\nCopied str1 into copy: %s", copy);

    int result = myStrcmp(str1, str2);
    if (result == 0)
        printf("\nStrings are equal.");
    else if (result > 0)
        printf("\nstr1 is greater.");
    else
        printf("\nstr1 is smaller.");

    return 0;
}
