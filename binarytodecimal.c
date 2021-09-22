#include<stdio.h>
#include<string.h>
int main(){
    int i,temp[20],bin,decimal;
    printf("enter the binary numbers\n");
    scanf("%d",&bin);
    for(i=0;i<=20;i++){
        {
        temp[i]=(bin[i])*(2*i);
        }
    }
    for(i=0;i<=20;i++){
    decimal=(temp[0]+temp[1]+temp[2]+temp[3]+temp[4]+temp[5]);}
    printf("the decimal value of (%d)2 is (%d)10",bin[20],decimal);
    return 0;
}
