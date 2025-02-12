#include <stdio.h>

struct student
{
    int num;
    char name[10];
    char sex;
};

int main(){
    struct student s={1001,"kwl",'M'};
    struct student sarr[2]={1001,"kwl",'M',1002,"kkk",'F'};
    struct student *p;//定义结构体指针
    p=&s;
    printf("%-5d%-5s %-5c\n",(*p).num,(*p).name,(*p).sex);//方式一，不推荐
    printf("%-5d%-5s %-5c\n",p->num,p->name,p->sex);//方式二，推荐
    printf("-------------下面是偏移------------\n");
    p=sarr;
    printf("%-5d%-5s %-5c\n",(*p).num,(*p).name,(*p).sex);
    printf("%-5d%-5s %-5c\n",p->num,p->name,p->sex);
    printf("----------------------------------\n");
    p+=1;
    printf("%-5d%-5s %-5c\n",(*p).num,(*p).name,(*p).sex);
    printf("%-5d%-5s %-5c\n",p->num,p->name,p->sex);
    return 0;
}