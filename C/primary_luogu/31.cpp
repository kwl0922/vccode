//P5722 【深基4.例11】数列求和
#include<stdio.h>
int main(){
    int n,i=0,count=0;
    scanf("%d",&n);
    while(n){
        count+=i+1;
        i++;
        n--;
    }
    printf("%d",count);
    return 0;
}