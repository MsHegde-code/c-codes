#include<stdio.h>
int main(){
    int a[4],i;
    printf("enter any 4 numbers\n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    if(a[0]>a[1] && a[0]>a[2] && a[0]>a[3]) printf("%d is largest \n",a[0]);
    else if(a[1]>a[0] && a[1]>a[2] && a[1]>a[3]) printf("%d is largest\n",a[1]);
    else if(a[2]>a[0] && a[2]>a[0] && a[2]>a[3]) printf("%d is the largest\n",a[2]);
    else printf("%d is largest\n",a[3]);
    return 0;
}