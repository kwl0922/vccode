//P2550 [AHOI2001] 彩票摇奖
#include<stdio.h>
int main(){
    int a[7],i,j,m,n,p,len,k=0,c[7]={0,0,0,0,0,0,0},count=0;
    scanf("%d",&n);
    len=n*7;
    int b[len];
    for(i=0;i<7;i++){
        scanf("%d",&a[k++]);
    }
    k=0;
    for(i=0;i<len;i++){
        scanf("%d",&b[k++]);
    }
    for(j=0;j<n;j++){
        for(i=0;i<7;i++){
            m=j*7;
            for(p=0;p<7;p++){
                if(a[i]==b[m]){
                    count++;
                }
                m++;
            }
        }
        if(count==7){
            c[0]++;
        }
        if(count==6){
            c[1]++;
        }
        if(count==5){
            c[2]++;
        }
        if(count==4){
            c[3]++;
        }
        if(count==3){
            c[4]++;
        }
        if(count==2){
            c[5]++;
        }
        if(count==1){
            c[6]++;
        }
        count=0;
    }
    for(i=0;i<7;i++){
        printf("%d ",c[i]);
    }
    return 0;
}