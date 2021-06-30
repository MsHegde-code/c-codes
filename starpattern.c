//star pattern1 using for loop
#include<stdio.h>
int main(){
    int i,j;
    printf("star pattern 1\n");
    for(j=10;j>=1;j--){// outer loop will print new lines
    for(i=1;i<=j;i++){// here i<=j, i.e when j is decreased, i max value will limit to j
        printf("*");// inner loop will print star
    }
    printf("\n");}
    return 0;
}