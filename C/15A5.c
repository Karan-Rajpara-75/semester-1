#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    gets(str);
    printf("%s\n%d", str, strlen(str));
}