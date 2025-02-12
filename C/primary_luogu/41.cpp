//P4956 [COCI 2017/2018 #6] Davor
#include<stdio.h>
int main(){
    int n,j,x,k=1,result=0;
    scanf("%d",&n);
    while(k<=10000){
        for(x=1;x<=100;x++){
            for(j=0;j<7;j++){
                result+=x+j*k;
            }
            result*=52;
            if(result>=n){
                break;
            }else{
                result=0; 
            }
        }
    if(result==n){
        printf("%d\n%d",x,k);
        break;
    }
    k++;
    }
    return 0;
}