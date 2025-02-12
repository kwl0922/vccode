//P5732 【深基5.习7】杨辉三角
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    a[0][0]=1;a[1][0]=1;a[1][1]=1;
    for(i=2;i<n;i++){
        a[i][0]=1;a[i][i]=1;
        j=0;
        while(j+1<=i-1){
            a[i][j+1]=a[i-1][j]+a[i-1][j+1];
            j++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}