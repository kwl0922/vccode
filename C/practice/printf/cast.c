#include<stdio.h>

int main(){
    int a=5;
    float b=a/2;//由于左操作数a与右操作数2都为int型，于是结果b也为int型，值为2
    float d=(float)a/2;//经过强制类型转换后，结果为float型，值为2.5
    printf("%.f\n",b);
    printf("%.1f",d);
    return 0;
}