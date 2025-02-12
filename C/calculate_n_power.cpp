#include<stdio.h>
//计算m的n次方
int main(){
    int m,n,total=1;
    printf("请输入基数：\n");
    scanf("%d",&m);
    printf("请输入次方：\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        total*=m;
    }
    printf("%d的%d次方=%d",m,n,total);
    return 0;
}