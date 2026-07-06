//Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5, IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000) 
#include <stdio.h>
int main()
{
    int di;
    printf("enter a decimal number:");
    scanf("%d",&di);
    while(di!=0)
    {
      if (di<=1000)
      {
        printf("M");
        di = di - 1000;
      }
      else if(di>=1000 && di<=900)
      {
        printf("CM");
        di = di - 900;
      }
      else if(di>=900 && di<=500)
      {
        printf("D");
        di = di - 500;

      }
      else if(di>=500 && di<=400)
      {
        printf("CD");
        di = di - 400;
      }
      else if(di>=400 && di<=100)
      {
        printf("C");
        di = di -100;
      }
      else if(di>=100 && di<=90)
      {
        printf("XC");
        di = di - 90; 
      }
      else if(di>=90 && di<=50)
      {
        printf("L");
        di = di - 50;
      }
      else if(di>=50 && di<=40)
      {
        printf("XL");
        di = di - 40;
      }
      else if(di>=40 && di<=10)
      {
        printf("X");
        di = di - 10;
      }
      else if(di>=10 && di<=9)
      {
        printf("IX");
        di = di - 9;
      }
      else if(di>=9 && di<=5)
      {
        printf("V");
        di = di - 5;
      }
      else if(di>=5 && di<=4)
      {
        printf("IV");
        di = di - 4;
      }
      else if (di>=4 && di<=1)
      {
        printf("I");
        di = di - 1;
      }
      else
      {
        printf("not velud number");
      }
  }
}