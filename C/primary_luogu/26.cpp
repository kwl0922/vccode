//P5721 【深基4.例6】数字直角三角形
#include<stdio.h>
int main(){
    int n,i,j=1;
    scanf("%d",&n);
    while(n>=1){
        for(i=1;i<=n;i++){
            if(j<10){
                printf("0%d",j++);
            }
            else{
                printf("%d",j++);
            }
        }
        printf("\n");
        n--;
    }
    return 0;
}