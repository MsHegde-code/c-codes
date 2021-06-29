#include<stdio.h>
int main(){
    int a,n,mul;
    printf("enter a number for multiplication table\n");
    scanf("%d",&n);
    //using for loop
    for(a=1;a<=50;a++){
        mul=n*a;
        printf("%d*%d=%d\n",n,a,mul);
    }
    return 0;
}