#include<stdio.h>
int fact(int a); // function declaration
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,fact(n));
    return 0;
}
int fact(int a) //function definition
{
    int i=1;
    int fact=1;
    while(i<=a){
        fact=fact*i;
        i=i+1;
    }
    return fact;
}
