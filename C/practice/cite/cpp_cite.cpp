#include <stdio.h>
//c++的引用，方便编程
void modify_num(int &b){//c++引用：形参中带&
    b+=1;
}
void change_num(int *b){//未引用
    *b+=1;
}
int main(){
    int a=10,b=12;
    modify_num(a);//引用后，可直接传入变量
    printf("%d\n",a);
    change_num(&b);//引用前，需传入变量地址
    printf("%d\n",b);
}