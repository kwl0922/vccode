//P1427 小鱼的数字游戏
#include<stdio.h>
int main(){
    int i=0,j,e,a[100];
    scanf("%d",&e);
    while(e!=0){
        a[i++]=e;
        scanf("%d",&e);
    }
    for(j=i-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}