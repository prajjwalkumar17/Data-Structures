#include<stdio.h>
struct student{
char name[20];
int roll;
int mark;
}stu1;
int main(){
printf("enter student's name \n");
scanf("%s",&stu1.name);
printf("enter student's roll \n");
scanf("%d",&stu1.roll);
printf("enter student's overall mark \n");
scanf("%d",&stu1.mark);
printf(" student's name is %s \n his roll no is %d \n and marks is %d\n  ",stu1.name,stu1.roll,stu1.mark);
}
