// addition of 3x1 matrix
#include<stdio.h>
int main(){
    int i,j,mat1[3],mat2[3],sum[3];
    printf("Enter the numbers of matrix 1\n");
    for(i=0;i<3;i++){
        scanf("%d",&mat1[i]);
    }
    printf("Enter the numbers of matrix 2\n");
    for(j=0;j<3;j++){
        scanf("%d",&mat2[j]);
    }
    for(i=0;i<3;i++){
        sum[i]=mat1[i]+mat2[i];
    }
    printf("sum[0]=%d\nsum[1]=%d\nsum[2]=%d\n",sum[0],sum[1],sum[2]);
    return 0;
}