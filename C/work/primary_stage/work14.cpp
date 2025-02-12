#include <stdio.h>
#include <stdlib.h>
//主函数定义指针，传入子函数，
//子函数malloc申请空间，通过fgets读取字符串，并在子函数输出
void get(char *&i,int j){
    i=(char*)malloc(j);
    fgets(i,100,stdin);
}
int main(){
    char *p=NULL;
    get(p,100);
    puts(p);
    free(p);
    return 0;
}