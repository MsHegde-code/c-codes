#include<stdio.h>
int main(){
    int y;
    printf("enter the year\n");
    scanf("%d",&y);
    if((y%4)==0){
        printf("It is a leap year\n");
    }
    else if((y%100)==0){
        printf("It is a leap year\n");
    }
    else if(y<0){
        printf("entered year should be a positive integer\n");
    }
    else{
        printf("It is not a leap year\n");
    }
    return 0;
}