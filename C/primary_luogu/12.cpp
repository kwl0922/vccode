//P5715 【深基3.例8】三位数排序
#include<stdio.h>
int main(){
    int a[3],m,i,j;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=1;i<3;i++){
        for(j=1;j<3;j++){
            if(a[j-1]>a[j]){
                m=a[j-1];
                a[j-1]=a[j];
                a[j]=m;
            }
        }
    }
    printf("%d %d %d",a[0],a[1],a[2]);
    return 0;
}