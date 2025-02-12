//P5731 【深基5.习6】蛇形方阵
#include<stdio.h>
int main(){
    int n,m=0,i,j,k=1;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    i=0;j=0;
    while(k<=n*n){
        if(m==0){
            while(a[i][j]==0&&j<n){
                a[i][j++]=k++;
            }
            j--;
            i++;
            m++;
            m%=4;
        }
        else if(m==1){
            while(a[i][j]==0&&i<n){
                a[i++][j]=k++;
            }
            i--;
            j--;
            m++;
            m%=4;
        }
        else if(m==2){
            while(a[i][j]==0&&j>=0){
                a[i][j--]=k++;
            }
            j++;
            i--;
            m++;
            m%=4;
        }
        else if(m==3){
            while(a[i][j]==0&&i>=0){
                a[i--][j]=k++;
            }
            i++;
            j++;
            m++;
            m%=4;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]/10==0){
                printf("  %d",a[i][j]);
            }else if(a[i][j]/10!=0&&a[i][j]/100==0){
                printf(" %d",a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}