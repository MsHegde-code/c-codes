#include<stdio.h>
int main(){
    int i,j;
    printf("number pattern 1\n");
    for(j=4;j>=1;j--){
    for(i=1;i<=4;i++){
            if((i+j)<=5) printf("%d",i);
            else printf(" ");
    }
    printf("\n");
    }
    return 0;
}