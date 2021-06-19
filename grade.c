#include<stdio.h>
int main(){
    float a;
    printf("enter the marks of the student");
    scanf("%f",&a);
    if(a>=90){
        printf("the grade is A");
    }
    else if(a>=75){
        printf("the grade is B");
    }
    else if(a>=50){
        printf("the grade is c");
    }
    else if(a>=30){
        printf("the grade is d");
    }
    else{
        printf("the student failed");
    }
    return 0;
}