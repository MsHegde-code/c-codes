#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum to %d integer(s) is %d",n,sum);
    return 0;

}