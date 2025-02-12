#include <stdio.h>
//计算i的阶乘
int main(){
    int i,j=1;
    scanf("%d",&i);
    while(i){
        j*=i;
        i--;
    }
    printf("%d",j);
    return 0;
}