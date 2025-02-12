#include<stdio.h>

struct student{//学生
    int stu_num;//学号
    char stu_name[20];//姓名
    char stu_sex;//性别
};//一定要加封号
int main(){
    int i;
    struct student array[3];//定义一个结构体数组
    for(i=0;i<3;i++){
        scanf("%d%s %c",&array[i].stu_num,array[i].stu_name,&array[i].stu_sex);
    }
    for(i=0;i<3;i++){
        printf("%-5d%-5s%-5c\n",array[i].stu_num,array[i].stu_name,array[i].stu_sex);
    }
}