//P5712 【深基3.例4】Apples
#include<stdio.h>
int main(){
    char str1[]="Today, I ate ";
    char str2[]=" apple.";
    char str3[]=" apples.";
    int x;
    scanf("%d",&x);
    if(x==1||x==0){
        printf("%s%d%s",str1,x,str2);
    }
    else{
        printf("%s%d%s",str1,x,str3);
    }
    return 0;
}