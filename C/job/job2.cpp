#include<stdio.h>

struct student{
    int stu_num;
    char stu_name[20]; 
    char stu_sex;
}stu;

int main()
{
    scanf("%d %s %c",&stu.stu_num,stu.stu_name,&stu.stu_sex);
    printf("%d %s %c",stu.stu_num,stu.stu_name,stu.stu_sex);
    return 0;
}