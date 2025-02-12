#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int num;
    char name[10];
    char sex;
}*p;

int main(){
    p=(struct student*)malloc(sizeof(struct student));
    p->num=1111;
    p->sex='M';
    strcpy(p->name,"shepiguai");
    printf("%-5d%-5s %-5c\n",p->num,p->name,p->sex);
    free(p);//一定要释放！！！！！！！！！
    return 0;
}