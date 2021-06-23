/* An electricity board charges the following rates for the use of
electricity: for the first 200 units 80 paise per unit: for the next
100 units 90 paise per unit: beyond 300 units Rs 1 per unit. All users
are charged a minimum of Rs. 100 as meter charge. If the total amount
is more than Rs 400, then an additional surcharge of 15% of total
amount is charged. Write a program */
#include<stdio.h>
#include<math.h>
int main(){
    char name[20];
    float n,m;
    printf("enter the name of the consumer\n");
    scanf("%s",&name);
    printf("enter the meter reading\n");
    scanf("%f",&m);
    if(m<=100){
        n=(m*0.8)+(100);
    }
    else if(m>100  ||  m<=300){
        n=(m*0.9)+100;
    }
    else{
        n=(m*1)+100;
    }
    if(n>400){
        n=n+((15*n)/100);
    }
    printf("amount to be paid is %.3f\n",n);
    return 0;
}