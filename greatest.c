#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(b<a&&a>c){
        printf("%d is greatest",a);
    }
    else if(a<b&&b>c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }
    return 0;
}