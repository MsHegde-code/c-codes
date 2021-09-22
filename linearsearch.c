// linear search using array
#include<stdio.h>
int main(){
    int i,n,a[8];
    printf("enter the 8 numbers\n");
    for(i=0;i<8;i++)
    scanf("%d",&a[i]);
    printf("enter the number to be searched\n");
    scanf("%d",&n);
    for(i=0;i<8;i++){
        if(a[i]==n){
             printf("%d is persent in a[%d]\n",n,i);
            return 0;
        }
    }
    printf("%d number is not in the array\n",n);
    return 0;
}