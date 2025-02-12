#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//堆空间与栈空间的差异
char *stack(){//定义一个返回值为指针的函数，栈空间
    char c[20]="i am angry";
    puts(c);
    return c;
}

char *heap(){//定义一个返回值为指针的函数，堆空间
    char c[20]="i am angry";
    char *p=(char*)malloc(20);
    //p=c;不能这样赋给地址，否则初始的指针地址会被覆盖，所以最好采用strcpy。
    strcpy(p,c);
    puts(p);
    return p;
}

int main(){
    char *a;
    a=stack();
    puts(a);
    //输出结果为空或者乱码，
    //因为stack()函数执行完，栈空间就会被释放，自然无法打印内容。
    a=heap();
    puts(a);
    free(a);//而malloc申请的空间通过free()函数才会被释放。
    return 0;
}