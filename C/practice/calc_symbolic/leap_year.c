#include <stdio.h>

int main(){
    int i;
    printf("请输入年份：\n");
    scanf("%d",&i);
    if(i%4==0 && i%100!=0 || i%400==0){
        printf("%d年是闰年！\n",i);
    }
    else{
        printf("%d年不是闰年！\n",i);
    }
    return 0;
}