#include<stdio.h>
int main(){
    int a;
    printf("enter a number for increment and decrement operations\n");
    scanf("%d",&a);
    printf("Increment ++a = %d\n",++a);//pre increment operator
    printf("a=%d\n",a);
    printf("Increment a++ = %d\n",a++);//post increment operator
    printf("a=%d\n",a);
    printf("Decrement --a = %d\n",--a);//pre decrement operator
    printf("a=%d\n",a);
    printf("Decrement a-- = %d\n",a--);//post decrement operator
    printf("a=%d\n",a);
    return 0;
}