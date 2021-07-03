#include<stdio.h>
int main(){
    int i,j;
    printf("star pattern 2\n");
    for(j=5;j>=1;j--){// to print new lines
    for(i=1;i<=5;i++){
        if((i+j)<=5)  //when i+j is <= 5
            printf(" ");    //print space
        else
            printf("*");    //print star
    }
    printf("\n");
    }
    return 0;
}