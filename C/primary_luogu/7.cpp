//P5710 【深基3.例2】数的性质
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a>4&&a<=12)&&a%2==0){
        printf("%d ",1);
    }
    else{
        printf("%d ",0);
    }
    if((a>4&&a<=12)||a%2==0){
        printf("%d ",1);
    }
    else{
        printf("%d ",0);
    }
    if(((a>4&&a<=12)&&a%2!=0)||((a<=4||a>12)&&a%2==0)){
        printf("%d ",1);
    }
    else{
        printf("%d ",0);
    }
    if((a<=4||a>12)&&a%2!=0){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
    return 0;
}