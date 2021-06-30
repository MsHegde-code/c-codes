//write a program to check the number is a palindrome or not
#include<stdio.h>
int main(){
    int n,num,rem,rev=0;
    printf("enter a number\n");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        rem=num%10;
        num=num/10;
        rev=rev*10 + rem;
    }
    printf("the reverse of %d is %d\n",n,rev);
    if(n==rev)
        printf("it is a palindrome\n");
    else
        printf("it is not a palindrome\n");
    return 0;
}