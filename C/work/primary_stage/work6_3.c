#include <stdio.h>
#include <string.h>
//运用指针判断对称数
int main(){
    char a[20]={0},b[20]={0};
    char *p;
    int len,i;
    gets(a);
    len=strlen(a);
    p=&a[len-1];
    for(i=0;i<len;i++){
        b[i]=*(p-i);
    }
    if(strcmp(a,b)==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}