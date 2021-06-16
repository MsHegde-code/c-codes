#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter a number greater than 1 to begin the infinite loop");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d is a loop",n);
        i++;
    }
    return 0;
}