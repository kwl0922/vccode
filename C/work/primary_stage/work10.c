#include <stdio.h>
#include <string.h>
//将字符串逆置并比较ascii码
int main(){
    int i,j=0,ret;
    char a[20],b[20]={0};//数组b初始化赋值全0，是为了有结束符，避免访问越界
    gets(a);
    i=strlen(a);
    while(i>=0){
        i--;
        b[j]=a[i];
        j++;
    }
    //puts(b);
    ret=strcmp(a,b);
    if(ret<0){
        printf("%d\n",-1);
    }
    else if(ret>0){
        printf("%d\n",1);
    }
    else{
        printf("%d\n",0);
    }
    return 0;
}