#include <stdio.h>

int main(){
    int i=5;
    int *p=&i;
    printf("%d\n",i);//直接访问
    printf("%d\n",*p);//间接访问：*取出p内存放的i的地址，再定位到i内的值，取出
    return 0;
}