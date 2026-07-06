#include <stdio.h>

// Manual strncmp()
int myStrncmp(char s1[], char s2[], int n) {
    int i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    if (i == n) 
        return 0;
    return s1[i] - s2[i];
}

// Manual strncpy()
void myStrncpy(char dest[], char src[], int n) {
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    // If src is shorter, fill remaining with null
    for (; i < n; i++)
        dest[i] = '\0';
}

// Manual strncat()
void myStrncat(char dest[], char src[], int n) {
    int i = 0, j = 0;

    // Move i to end of dest
    while (dest[i] != '\0')
        i++;

    // Append n characters from src
    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char s1[100], s2[100], copy[100], cat[100];
    int n;

    printf("Enter string 1: ");
    gets(s1);

    printf("Enter string 2: ");
    gets(s2);

    printf("Enter n: ");
    scanf("%d", &n);

    // strncmp
    int result = myStrncmp(s1, s2, n);
    printf("\nstrncmp result = %d", result);

    // strncpy
    myStrncpy(copy, s1, n);
    copy[n] = '\0';
    printf("\nAfter strncpy: %s", copy);

    // strncat
    myStrncpy(cat, s1, myStrncmp(s1,"",100)+1);  // Copy s1 fully
    myStrncat(cat, s2, n);
    printf("\nAfter strncat: %s\n", cat);

    return 0;
}
