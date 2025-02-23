//P5743 【深基7.习8】猴子吃桃
#include<stdio.h>
int main(){
    int n,result=1;
    scanf("%d",&n);
    n--;
    while(n){
        result=(result+1)*2;
        n--;
    }
    printf("%d",result);
    return 0;
}