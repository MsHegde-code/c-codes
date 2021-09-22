#include<stdio.h>
int main(){
    int i,a[5];
    printf("enter any 5 numbers \n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("After swapping\n");
    for(i=4;i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}