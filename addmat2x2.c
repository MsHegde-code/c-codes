//addition  of 2x2 matrix
#include<stdio.h>
int main(){
    int i,j,mat1[2][2],mat2[2][2],sum[2][2];
    printf("Enter the elements of matrix 1\n");
    for(i=0;i<2;i++) scanf("%d",&mat1[0][i]);
    for(i=0;i<2;i++) scanf("%d",&mat1[1][i]);
    printf("Enter the elements of matrix 2\n");
    for(j=0;j<2;j++) scanf("%d",&mat2[0][j]);
    for(j=0;j<2;j++) scanf("%d",&mat2[1][j]);
    for(i=0;i<2;i++){
        sum[0][i]=mat1[0][i]+mat2[0][i];
    }
    for(i=0;i<2;i++){
        sum[1][i]=mat1[1][i]+mat2[1][i];
    }
    printf("sum[0][0]=%d\tsum[0][1]=%d\nsum[1][0]=%d\tsum[1][1]=%d\n",sum[0][0],sum[0][1],sum[1][0],sum[1][1]);
    return 0;
}