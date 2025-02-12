//P5727 【深基5.例3】冰雹猜想
#include<stdio.h>
int main(){
    int n,a[100],i=1;
    scanf("%d",&n);
    a[0]=n;
    while(n!=1){
        if(n%2==0){
            n/=2;
            a[i++]=n;
        }
        else if(n%2==1){
            n=n*3+1;
            a[i++]=n;
        }
    }
    for(int j=i-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}