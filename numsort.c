//sorting the input numbers in an order.
#include<stdio.h>
int main(){
    int i,j,n,a[20];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("user entered elements are:\n");
    for(i=0;i<=n-1;i++){
        printf("%d\t",a[i]);
    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nthe sorted elements are :\n");
    for(i=0;i<=n-1;i++){
        printf("%d\t",a[i]);
    }
}