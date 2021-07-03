#include<stdio.h>
int main(){
    int a,b;
    printf("star pattern 3\n");
    for(b=1;b<=5;b++){ //here 'b' should start the iteration from 1.
    for(a=1;a<=5;a++){
        if((a+b)<=5)
            printf(" ");// when a and b is less than 5, this prints space
        else
            printf("*");// when a ans b is grater than 5, it prints star
    }
    printf("\n");
    }
    return 0;
}