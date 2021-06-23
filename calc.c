#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    char op;
    printf("enter the operator\n");
    scanf("%c",&op);
    printf("enter the two numbers\n");
    scanf("%f%f",&a,&b);
    switch(op){
        case '+' : c=a+b;
            printf("the sum is %.3f",c);
            break;
        case '-' : c=a-b;
            printf("the difference is %.3f",c);
            break;
        case '/' : c=a/b;
            printf("the quotient is %f",c);
            break;
        case '*' : c=a*b;
            printf("the product is %f",c);
            break;
    }
    return 0;
}