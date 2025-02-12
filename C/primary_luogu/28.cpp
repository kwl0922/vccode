//P1035 [NOIP2002 普及组] 级数求和
#include<stdio.h>
int main(){
    int n,i=1;
    double s=0;
    scanf("%d",&n);
    while(s<=1.0*n){
        s+=1/(1.0*i);
        i++;
    }
    printf("%d",i-1);
    return 0; 
}