//P1420 最长连号
#include<stdio.h>
int main(){
    int n,i,c1=0,c2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        while(a[i]+1==a[i+1]){
            c1++;
            i++;
        }
        if(c1>c2){
            c2=c1;
        }
        c1=0;
    }
    printf("%d",c2+1);
    return 0;
}