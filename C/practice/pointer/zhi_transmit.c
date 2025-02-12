#include <stdio.h>

void transmit(int *j){
    *j=10;
}
int main(){
    int i=5;
    transmit(&i);//C语言函数调用是值传递，实参i赋值给形参，相当于j=i;结果自然不会改变
    printf("%d",i);
}