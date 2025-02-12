#include <stdio.h>
//判断闰年
int main(){
    int i;
    scanf("%d",&i);
    if(i%4==0&&i%100!=0||i%400==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}