#include <stdio.h>
void main()
{
  int t;
  printf("enter a number of arry:");
  scanf("%d", &t);
  int arry[t][t], i, j, p = 0, n = 0, z = 0;
  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= 3; j++)
    {
      printf("enter a arry number:");
      scanf("%d", &arry[i][j]);
    }
  }
  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= 3; j++)
    {
      if (arry[i][j] > 0)
      {
        p++;
      }
      else if (arry[i][j] < 0)
      {
        n++;
      }
      else
      {
        z++;
      }
    }
  }
  printf("1=p, 2=n, 3=z\n");
  printf("%d %d %d", p, n, z);
}