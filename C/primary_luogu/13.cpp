//P5716 【深基3.例9】月份天数
#include<stdio.h>
int main(){
    int year,month;
    scanf("%d%d",&year,&month);
    if(month==4||month==6||month==9||month==11){
        printf("%d",30);
    }
    else if(month==2){
        if(year%100==0&&year%400==0){
            printf("%d",29);
        }
        else{
            printf("%d",28);
        }
    }
    else{
        printf("%d",31);
    }
    return 0;
}