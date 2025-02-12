#include <stdio.h>
//使用引用
void pointer_cite(int *&p,int *q){//让指针p也指向a
    p=q;
}
//不使用引用，需要使用二级指针
void pointer(int **p,int *q){//让指针p也指向a
    *p=q;
}
//在子函数中修改主函数的一级指针变量
int main(){
    int *p=NULL;//定义指针一定要传值
    int a=10;
    int *q=&a;
    pointer_cite(p,q);
    printf("%d\n",*p);
    pointer(&p,q);
    printf("%d",*p);
    return 0;
}