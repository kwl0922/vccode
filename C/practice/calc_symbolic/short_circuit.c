#include <stdio.h>
//逻辑与和逻辑或 短路运算（精简代码）
void main(){
    int i=1;
    i&&printf("you can see me!\n");//逻辑与：i为真时可输出
    i=0;
    i||printf("you can see me!\n");//逻辑或：i为假时可输出
}