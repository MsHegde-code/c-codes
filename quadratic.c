/*write a program to print the roots of a quadratic expression and display its roots*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    float a,b,c,d,x1,x2,rp,ip;
    printf("Enter the coefficients of a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0,b==0,c==0){
        printf("invalid inputs");
        exit(0);
    }
    d=(b*b)-(4*a*c);        //discriminant - it is the part underneath the squareroot of the quad.formula
    if(d==0){
        printf("roots are real and equal\n");
        x1=-b/(2*a);
        printf("x1=x2=%f\n",x1);
    }
    else if(d>0){
        printf("roots are real and distinct\n");
        x1=(-b+sqrt(abs(d))/(2*a));
        x2=(-b-sqrt(abs(d))/(2*a));
        printf("x1=%f\nx2=%f\n",x1,x2);
    }
    else{
        printf("roots are imaginary\n");
        rp=-b/(2*a);
        ip=sqrt(abs(d))/(2*a);
        printf("x1=%.3f+i%.3f\nx2=%.3f-i%.3f\n",rp,ip,rp,ip);
    }
    return 0;
}