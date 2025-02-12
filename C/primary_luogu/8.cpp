//P5711 【深基3.例3】闰年判断
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%4==0&&a%100!=0){
        printf("%d",1);
    }else if(a%100==0&&a%400==0){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}