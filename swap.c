#include<stdio.h>
void main(){
    int variable_1,variable_2;
    printf("enter the numbers\n");
    scanf("%d%d",&variable_1,&variable_2);
    printf("before swapping\n");
    printf("%d\t%d",variable_1,variable_2);
    variable_1=variable_1+variable_2;
    variable_2=variable_1-variable_2;
    variable_1=variable_1-variable_2;
    printf("\nafter swapping\n %d\t%d",variable_1,variable_2);

}