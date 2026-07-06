#include <stdio.h>
void main(){
    int a,b,*temp1,*temp2;
    printf("Enter A Number 1: ");
    scanf("%d",&a);
    printf("Enter A Number 2: ");
    scanf("%d",&b);
    temp1 = &a;
    temp2 = &b;
    temp1 = a-*temp1;
    temp2 = *temp1;
    temp1= b;
    printf("a=%d,b=%d",*temp1,*temp2);
}