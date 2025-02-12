#include <stdio.h>
//输入i个整数并计算里面2的个数
int main(){
    int i,j=0,k,m,a[20],count=0;
    scanf("%d",&i);
    k=i;
    while(i){
        scanf("%d",&a[j]);
        j++;
        i--;
    }
    for(k>0;k--;i++){
        while(a[i]){
            m=a[i]%10;
            a[i]/=10;
            if(m==2){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}