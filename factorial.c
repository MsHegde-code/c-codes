#include<stdio.h>
int main(){
    int n,i,fact;
    printf("enter a number\n");
    scanf("%d",&n);
    i=1;    //for while loop 1st condn should be declared before the loop
    fact=1;
    while(i<=n){    //in while(2nd condn)
        fact=fact*i;
        i++;        // 3rd condn
    }
    printf("%d!=%d\n",n,fact);  
    return 0;
}