#include<stdio.h>
#include<string.h>
int main(){
    char name1[20],name2[20],join;int lenstr1,lenstr2,strcomp;
    printf("enter the first string \n");
    scanf("%s",name1);
    printf("enter the second string \n");
    scanf("%s",name2);
    lenstr1=strlen(name1);
    lenstr2=strlen(name2);
    printf("the length of the string 1 is %d\n",lenstr1);
    printf("the length of the string 2 is %d\n",lenstr2);
    strcomp=strcmp(name1,name2);
    if(strcomp==0) printf("the strings are same\n");
    else printf("the strings are different\n");
    join=strcat(name1,name2);
    printf("the concated string is %s",name1);
    return 0;
}