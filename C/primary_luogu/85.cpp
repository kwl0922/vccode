//P5738 【深基7.例4】歌唱比赛
#include<stdio.h>

int main(){
    int n,m,max,min,result=0,i,j,e;
    scanf("%d%d",&n,&m);
    double a[n],max2;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&e);
            if(j==0){
                max=e;
                min=e;
            }else{
                if(e>max){
                    max=e;
                }else if(e<min){
                    min=e;
                }
            }
            result+=e;
        }
        a[i]=1.0*(result-max-min)/(m-2);
        result=0; 
    }
    for(i=0;i<n;i++){
        if(i==0){
            max2=a[i];
        }else{
            if(a[i]>max2){
                max2=a[i];
            }
        }
    }
    printf("%.2lf",max2);
    return 0;
}