//P5719 【深基4.例3】分类平均
#include<stdio.h>
int main(){
    int n,i,k,c1=0,c2=0,j=0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        if(i%k==0){
            c1+=i;
            j++;
        }
        else{
            c2+=i;
        }
    }
    printf("%.1lf %.1lf",1.0*c1/j,1.0*c2/(n-j));
    return 0;
}