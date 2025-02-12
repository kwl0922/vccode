//P1425 小鱼的游泳时间
#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c>=a){
        c-=a;
    }else{
        c+=12;
    }
    if(d-b<0){
        d=d-b+60;
        c--;
    }else{
        d-=b;
    }
    printf("%d %d",c,d);
    return 0;
}