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
    float total,units;
    printf("enter the name of the consumer\n");
    scanf("%s",name);
    printf("enter the meter reading\n");
    scanf("%f",&units);
    if(units<=200){
        total=(units*0.8)+(100);//meter reading when units less than 200
    }
    else if(units>200  &&  units<=300){
        total=(200*0.8)+((units-200)*0.9)+100;// when meter reading is between 200 and 301
    }
    else{
        total=(200*0.8)+(100*0.9)+((units-300)*1)+100;// when meter reading is freater than 300 units
    }
    if(total>400){
        total=total+((15*total)/100);// 15% surcharge on the total bill greater than 400rs only.
    }
    printf("name : %s\n",name);
    printf("amount to be paid is Rs. %.3f\n",total);
    return 0;
}