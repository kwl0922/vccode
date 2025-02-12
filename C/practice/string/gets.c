#include <stdio.h>
#include <string.h>

int main(){
    int ret;
    char c[20];
    char d[20];
    gets(c);
    gets(d);
    ret=strcmp(c,d);
    if(ret==0){
        printf("c=d的ascii码相等时时返回值为%d",ret);
    }else if(ret==-1){
        printf("c<d的ascii码值时返回值为%d",ret);
    }
    else{
        printf("c>d的ascii码值时返回值为%d",ret);
    }
    return 0;
}