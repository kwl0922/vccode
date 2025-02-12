//P1089 [NOIP2004 提高组] 津津的储蓄计划
#include<stdio.h>
int main(){
    int a[12],i,j=0,k=0,flag=0,r;
    for(i=0;i<12;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<12;i++){
        k+=300-a[i];
        if(k<0){
            printf("%d",0-(i+1));
            flag=1;
            break;
        }else if(k>=100){
            r=k/100;
            j+=r*100;
            k-=r*100;
        }
    }
    if(flag==0){
        printf("%.0lf",1.0*(k+j*1.2));
    }
    return 0;
}