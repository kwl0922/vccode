//P5718 【深基4.例2】找最小值
#include<stdio.h>
int main(){
    int n,i,min;
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
    printf("%d",min);
    return 0;
}