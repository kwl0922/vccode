//P5015 [NOIP 2018 普及组] 标题统计
#include<stdio.h>
int main(){
    char e,s[5];
    int i=0;
    scanf("%c",&e);
    while(e!='\n'){
        if(e!=' '){
            i++;
        }
        scanf("%c",&e);
    }
    printf("%d",i);
    return 0;
}