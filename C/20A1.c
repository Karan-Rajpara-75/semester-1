#include <stdio.h>
#include <string.h>
void main() {
    char s[100];
    int i, len, flag=1;
    scanf("%[^\n]", s);
    len=strlen(s);
    for(i=0;i<len/2;i++)
        if(s[i]!=s[len-i-1]) { flag=0; break; }
    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
}