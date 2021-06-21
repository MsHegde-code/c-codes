#include<stdio.h>
void main(){
    int a,b,x;
    printf("enter the values of a and b to swap\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping\n%d\n%d\nAfter swapping\n",a,b);
    x=b;
    b=a;
    printf("%d\n%d\n",x,b);
}