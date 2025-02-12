//P1888 三角函数
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
    for(int j=2;j<10;j++){//约分
        if(a[0]%j==0&&a[2]%j==0){
            a[0]/=j;
            a[2]/=j;
            j=2;
        }
    }
    printf("%d/%d",a[0],a[2]);
    return 0;
}