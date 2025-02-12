//P5735 【深基7.例1】距离函数
#include<stdio.h>
#include<math.h>

int main(){
    int i;
    double a[6],result;
    for(i=0;i<6;i+=2){
        scanf("%lf%lf",&a[i],&a[i+1]);
    }
    result=sqrt((a[0]-a[2])*(a[0]-a[2])+(a[1]-a[3])*(a[1]-a[3]))+sqrt((a[0]-a[4])*(a[0]-a[4])+(a[1]-a[5])*(a[1]-a[5]))+sqrt((a[2]-a[4])*(a[2]-a[4])+(a[3]-a[5])*(a[3]-a[5]));
    printf("%.2lf",result);
    return 0;
}