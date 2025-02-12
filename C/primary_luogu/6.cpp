//P5709 【深基2.习6】Apples Prologue / 苹果和虫子
#include<stdio.h>
int main(){
    int m;
    double t,s;
    scanf("%d%lf%lf",&m,&t,&s);
    if(t!=0){
        if((int)s%(int)t==0){
            if(m-(int)(s/t)>=0){
                printf("%d",m-(int)(s/t));
            }
            else{
                printf("%d",0);
            }
        }
        else{
            if(m-(int)(s/t+1)>=0){
                printf("%d",m-(int)(s/t+1));
            }
            else{
                printf("%d",0);
            }
        }
    }
    else{
        printf("%d",0);
    }
    return 0;
}