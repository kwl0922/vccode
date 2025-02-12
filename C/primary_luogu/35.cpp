//P5724 【深基4.习5】求极差 / 最大跨度值
#include<stdio.h>
int main(){
    int n,i,min,max;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("%d",max-min);
    return 0;
}