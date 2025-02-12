//P2615 [NOIP2015 提高组] 神奇的幻方
#include<stdio.h>
int main(){
    int n,k,row,column,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=0;
        }
    }
    a[0][n/2]=1;
    row=0;
    column=n/2;
    for(k=2;k<=n*n;k++){
        if(row==0&&column!=n-1){
            a[n-1][column+1]=k;
            row=n-1;
            column+=1;
        }else if(row!=0&&column==n-1){
            a[row-1][0]=k;
            row-=1;
            column=0;
        }else if(row==0&&column==n-1){
            a[row+1][n-1]=k;
            row++;
            column=n-1;
        }else if(row!=0&&column!=n-1){
            if(a[row-1][column+1]==0){
                a[row-1][column+1]=k;
                row-=1;
                column++;
            }else{
                a[row+1][column]=k;
                row++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}