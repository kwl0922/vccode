//P5736 【深基7.例2】质数筛
#include<stdio.h>
#include<math.h>

int main(){
    int n,i,j,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==2){
            printf("%d ",2);
        }else if(a[i]%2==0||a[i]==1){
            continue;
        }else{
            for(j=3;j<=sqrt(a[i]);j++){
                if(a[i]%j==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                flag=0;
            }else{
                printf("%d ",a[i]);
            }
        }
    }
    return 0;
}