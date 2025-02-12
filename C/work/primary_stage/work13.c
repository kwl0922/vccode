#include<stdio.h>
//创建一个结构体，通过scanf读取数据
typedef struct student{//学生
    int stu_num;//学号
    char stu_name[20];//姓名
    char stu_sex;//性别
}s;//一定要加封号
int main(){
    s s;
    //结构体输出必须一个个成员单独输出
    scanf("%d%s %c",&s.stu_num,s.stu_name,&s.stu_sex);
    printf("%-d %-s %-c",s.stu_num,s.stu_name,s.stu_sex);
    return 0;
}