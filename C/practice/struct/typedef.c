#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//s等价于struct student，*p等价于struct student*
typedef struct student
{
    int num;//学号
    char name[20];//姓名
    char sex;
}s,*p;

int main(){
    p p1=(s*)malloc(sizeof(s));//定义了一个结构体指针变量
    p1->num=1111;
    p1->sex='M';
    strcpy(p1->name,"shepiguai");
    printf("%-5d%-5s %-5c\n",p1->num,p1->name,p1->sex);
    free(p1);//一定要释放！！！！！！！！！
    s s1={2222,"kwl",'M'};
    s *p2=&s1;//定义了一个结构体指针变量，等价于p p2;
    printf("%-5d%-5s %-5c\n",p2->num,p2->name,p2->sex);
    return 0;
}