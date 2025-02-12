//P5720 【深基4.例4】一尺之棰
#include<stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    while(a/2>=1){
        a/=2;
        count++;
    }
    printf("%d",count+1);
    return 0;
}