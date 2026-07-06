#include <stdio.h>
#include <string.h>
void main()
{
  int i;
  char s[100];
  printf("enter a name atlist a one stars *: ");
  scanf("%c", &s[100]);
  for (i = 0; i < '\0'; i++)
  {
    if (s[i] == '\0')
    {
      printf("%c", s[i - 1]);
    }
    else
    {
      printf("%c", s[i]);
    }
  }
  printf("%c", s[100]);
}