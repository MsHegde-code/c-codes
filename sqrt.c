#include <stdio.h>
#define ACCURACY 0.00001
int main(){
float n, x, sqt;
printf("Enter a number\n");
scanf("%f",&n);
x=n/2;
while((x*x - n) > ACCURACY)
x=(x+n/x)/2;
sqt = x;
printf("square root of %.2f is %.4f",n,sqt);
return 0;
}