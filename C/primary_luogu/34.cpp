//P1720 月落乌啼算钱（斐波那契数列
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    double x,y,z,r1=1,r2=1;
    scanf("%d",&n);
    z=sqrt(5);
    x=1.0*(1+z)/2;
    y=1.0*(1-z)/2;
    for(int i=0;i<n;i++){
        r1*=x;
        r2*=y;
    }
    printf("%.2lf",(r1-r2)/z);
    return 0;
}