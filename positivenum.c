#include<stdio.h>
int main(){
    double x;
    printf("Enter any number\n");
    scanf("%lf",&x);
    if(x>0){
        printf("It is a positive number\n");
    }
    else if(x<0){
        printf("It is a negative number\n");
    }
    else{
        printf("zero is neither positive nor negative\n");
    }
    return 0;
}