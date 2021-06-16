#include<stdio.h>
int main(){
    float i,p,t,r;
    printf("enter the values for 'p','t' and 'r'\n");
    scanf("%f%f%f",&p,&t,&r);
    i=(p*r*t)/100;
    printf("the interest is %f",i);
    return 0;
}