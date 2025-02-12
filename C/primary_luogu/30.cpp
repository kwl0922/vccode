//P2669 [NOIP2015 普及组] 金币
#include<stdio.h>
int main(){
    int n,i=0,count=0,result=0;
    scanf("%d",&n);
    while(count<n){
        count+=i+1;
        i++;
    }
    for(int j=1;j<i;j++){
        result+=j*j;
    }
    result+=i*(n-(count-i));
    printf("%d",result);
    return 0;
}