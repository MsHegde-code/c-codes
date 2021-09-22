//program to print student data using structure
#include<stdio.h>
int main(){
    int i,avg;
struct student
{
    char name[30];
    int rollnum;
    int marks;
    float percent;
}s1,s2,s3;// DECLARATION OF STRUCTURE VARIABLE .. we can also use structure array 
printf("enter first student details\nname :");
scanf("%s",s1.name);
printf("roll number :");
scanf("%d",&s1.rollnum);
printf("marks :");
scanf("%d",&s1.marks);
printf("percentage :");
scanf("%f",&s1.percent);
printf("enter second student details\nname :");
scanf("%s",s2.name);
printf("roll number :");
scanf("%d",&s2.rollnum);
printf("marks :");
scanf("%d",&s2.marks);
printf("percentage :");
scanf("%f",&s2.percent);
printf("enter third student data\nname :");
scanf("%s",s3.name);
printf("roll number :");
scanf("%d",&s3.rollnum);
printf("marks :");
scanf("%d",&s3.marks);
printf("percentage :");
scanf("%f",&s3.percent);

    printf("1. Student details are :\n");
    printf("name : %s\nroll num : %d\nmarks : %d\npercentage : %.3f",s1.name,s1.rollnum,s1.marks,s1.percent);
    printf("\n2. Student details are :\n");
    printf("name : %s\nroll num : %d\nmarks : %d\npercentage : %.3f",s2.name,s2.rollnum,s2.marks,s2.percent);
    printf("\n3. Student details are :\n");
    printf("name : %s\nroll num : %d\nmarks : %d\npercentage : %.3f",s3.name,s3.rollnum,s3.marks,s3.percent);
    avg=(s1.marks+s2.marks+s3.marks)/3;
    printf("\naverage marks of the student out of 10 is : %d",avg);
    return 0;
}