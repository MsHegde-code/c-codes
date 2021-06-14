#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value for 'a' and 'b'\n");
    scanf("%d%d",&a,&b);
    printf("Is a greater than b? %d \n",a>b);
    printf("Is a equal to b? %d \n",a==b);
    printf("Is a greater or equal to b? %d \n",a>=b);
    printf("IS b greater than or equal to a? %d\n", b>=a);
    printf("Is a is not equal to b? %d \n",a!=b);
    return 0;

}