//P2415 集合求和
#include<stdio.h>

int main(){
    int b[30],n=0,i,j,total=0,count=0;
    while(scanf("%d",&b[n++])==1);
    n--;
    for(j=0;j<n;j++){
        total+=b[j];
    }
    //求杨辉三角
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
        count+=a[n-1][i];
    }
    printf("%.0lf",1.0*total*count);
    return 0;
}