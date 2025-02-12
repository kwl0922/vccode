//P1428 小鱼比可爱
#include<stdio.h>
int main(){
    int n,i,j,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("0 ");
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]<a[i]){
                count++;
            }
        }
        printf("%d ",count);
        count=0;
    }
    return 0;
}