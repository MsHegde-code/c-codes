#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(n == i*i){// when 'n' is equal to i*i
            printf("%d is a perfect square\n",n);
            return 0;} // here return 0 is used when the if block is true 
    }                  // the controller will stop the program
    printf("%d is not a perfect square\n",n);// else this statement is printed
    return 0;
}