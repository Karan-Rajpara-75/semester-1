//Perform Multiplication of two matrices. 
#include <stdio.h>
void main(){
    int matrix[3][3],i,j,sum=0;
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("Enter Elements: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            if(i==j) {
                sum=sum+matrix[i][j];
            }
        }
    }
}