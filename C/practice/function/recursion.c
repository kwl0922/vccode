#include<stdio.h>
//递归,核心是找公式，f(n)=nf(n-1)，求阶乘
int f(int n){
    if(1==n){
        return 1;
    }
    return n*f(n-1);
}
//走台阶，n阶台阶，一次走1阶或两阶，共有多少种走法
//例:一共n阶，则当走到n阶时，要么是从第n-1阶上来的，要么是从第n-2阶上来的
//即step(n)=step(n-1)+step(n-2)
int step(int n){
    if(1==n||2==n){
        return n;
    }
    return step(n-1)+step(n-2);
}
int main(){
    int a=7,ret;
    //ret=f(a);
    ret=step(a);
    //printf("%d的阶乘=%d",a,ret);
    printf("一共有%d种走法",ret);
}