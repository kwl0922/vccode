//P5707 【深基2.例12】上学迟到
#include<stdio.h>
int main(){
    int a,b,c,i=1;
    scanf("%d%d",&a,&b);
    if(a%b!=0){
        c=a/b+1;
    }else{
        c=a/b;
    }
    while(i*60-c-10<0){
        i++;
    }
    if(8-i<0){
        a=8-i+24;
    }else{
        a=8-i;
    }
    b=i*60-c-10;
    if(a/10!=0&&b/10!=0){
        printf("%d:%d",a,b);
    }else if(a/10==0&&b/10!=0){
        printf("0%d:%d",a,b);
    }else if(a/10==0&&b/10==0){
        printf("0%d:0%d",a,b);
    }else if(a/10!=0&&b/10==0){
        printf("%d:0%d",a,b);
    }
    return 0;
}