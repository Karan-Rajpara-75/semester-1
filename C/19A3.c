#include <stdio.h>
#include <string.h>
int MyStrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}
int MyStrcmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }
    return s1[i] - s2[i];
}
void MyStrcpy(char dest[], char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
void MyStrcat(char dest[], char src[])
{
    int i = 0, j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}
void MyStrrev(char str[])
{
    int i, j;
    char temp;
    i = 0;
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
void MyStrlwr(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
}
void MyStrupr(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
}
int main()
{
    char s1[100], s2[100], temp[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    printf("\n---------- BUILT-IN STRING FUNCTIONS ----------\n");
    printf("strlen(s1) = %d\n", strlen(s1));
    printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));
    strcpy(temp, s1);
    printf("strcpy(temp, s1) → %s\n", temp);
    strcat(temp, s2);
    printf("strcat(temp, s2) → %s\n", temp);
    printf("strrev(s1) = %s\n", strrev(s1));
    printf("strlwr(s2) = %s\n", strlwr(s2));
    printf("strupr(s2) = %s\n", strupr(s2));
    printf("\n\nEnter first string again: ");
    gets(s1);
    printf("Enter second string again: ");
    gets(s2);
    printf("\n---------- USER-DEFINED FUNCTIONS ----------\n");
    printf("MyStrlen(s1) = %d\n", MyStrlen(s1));
    printf("MyStrcmp(s1, s2) = %d\n", MyStrcmp(s1, s2));
    MyStrcpy(temp, s1);
    printf("MyStrcpy(temp, s1) → %s\n", temp);
    MyStrcat(temp, s2);
    printf("MyStrcat(temp, s2) → %s\n", temp);
    MyStrrev(s1);
    printf("MyStrrev(s1) = %s\n", s1);
    MyStrlwr(s2);
    printf("MyStrlwr(s2) = %s\n", s2);
    MyStrupr(s2);
    printf("MyStrupr(s2) = %s\n", s2);
    return 0;
}