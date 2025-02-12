//P5713 【深基3.例5】洛谷团队系统
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(5*a<(3*a+11)){
        printf("Local");
    }else{
        printf("Luogu");
    }
    return 0;
}