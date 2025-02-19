//P5739 【深基7.例7】计算阶乘
#include<stdio.h>

void digui(int n,int *result){
    if(n>1){
        *result*=n;
        n--;
        digui(n,result);
         
    }
}
int main(){
    int n,result=1;
    scanf("%d",&n);
    digui(n,&result);
    printf("%d",result);
    return 0;
}