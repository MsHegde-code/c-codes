//addition of the input numbers using array
#include<stdio.h>
int main(){
    int i,a[5],sum;
    printf("enter the numbers for addition (only 5 num.)\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sum=a[0]+a[1]+a[2]+a[3]+a[4];
    printf("the sum is %d\n",sum);
    return 0;
}