#include<stdio.h>
int main(){
    int a,b,c,d;
    // program divided into two sections
    printf("star pattern 4\n");
    for(b=1;b<=5;b++){ // outer loop to print new lines
    for(a=1;a<=5;a++){ // to print the first pattern 1 to 5 lines
        if((a+b)<=5) printf(" ");
        else printf("*");
    }
    printf("\n");
    }
    for(d=0;d<4;d++){ // second outer loop to print new lines
    for(c=5;c>=1;c--){ // to print the second star pattern in descending order 
        if((c+d)>=5) printf(" "); // from line 6 to line 9
        else printf("*");
    }
    printf("\n");
    }
    return 0;
}