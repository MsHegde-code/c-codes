#include<stdio.h>
int main(){
    int i,j;
    printf("Number pattern 1\n");
    for(j=1;j<=4;j++){
    for(i=4;i>=j;i--)
        printf("%d",i);
    printf("\n");
    }
    return 0;
}