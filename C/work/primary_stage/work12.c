#include <stdio.h>
#include <stdlib.h>
//动态申请空间，存储字符串，并输出
int main(){
    int size;
    scanf("%d",&size);
    // char c;
    // scanf("%c",c);
    fflush(stdin);//清空输入缓冲区
    char *p;
    p=(char*)malloc(size);
    //fgets(p,size,stdin);
    gets(p);
    puts(p);
    free(p);//记得释放
    return 0;
}