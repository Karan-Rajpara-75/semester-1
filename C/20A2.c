#include <stdio.h>
void main()
{
    char s[200], *p = s, out[200];
    int k = 0;
    scanf("%[^\n]", s);
    while (*p != '\0')
    {
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z') || (*p >= '0' && *p <= '9'))
            out[k++] = *p;
        p++;
    }
    out[k] = '\0';
    printf("%s", out);
}