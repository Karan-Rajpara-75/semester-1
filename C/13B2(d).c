#include <stdio.h>
void main()
{
    int i,j,s,n=1; 
    char alphabet='A';
    for(i=1;i<=5;i++)
    {
        for(s=5;s>=i;s--)
        {
            printf(" ");
        }
        for(j=1,n=1;j<=i;j++)
        {
            if (i%2==1)
            {
                printf("%d ", n);
                n++; 
            }
            else
            {
                printf("%c ", alphabet);
                alphabet++;
            }
            
        }
        printf("\n");
    }
}