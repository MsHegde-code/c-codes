#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num2<num1&&num1>num3){
        printf("%d is greatest",num1);
    }
    else if(num1<num2&&num2>num3){
        printf("%d is greatest",num2);
    }
    else{
        printf("%d is greatest",num3);
    }
    return 0;
}