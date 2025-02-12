#include<stdio.h>

struct student{//学生
    int stu_num;//学号
    char stu_name[20];//姓名
    char stu_sex;//性别
};//一定要加封号
int main(){
    struct student s={111,"kwl",'m'};//初始化要用大括号
    //结构体输出必须一个个成员单独输出
    printf("%-5d%-5s%-5c\n",s.stu_num,s.stu_name,s.stu_sex);
    scanf("%d%s %c",&s.stu_num,s.stu_name,&s.stu_sex);
    printf("%-5d%-5s%-5c",s.stu_num,s.stu_name,s.stu_sex);
    return 0;
}