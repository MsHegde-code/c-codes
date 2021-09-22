#include<stdio.h>
int main(){
	int i,j;
	printf("this is a loop\n");
	for(j=5;j>=1;j--){
	for(i=1;i<j;i++){
	printf("*");
	}
	printf("\n");
}
return 0;
}