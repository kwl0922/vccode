#include <stdio.h>
//输入一个变量，通过子函数进行除2。
void half(int *j){
    *j/=2;
}
int main(){
    int i;
    scanf("%d",&i);
    half(&i);
    printf("%d",i);
    return 0;
}