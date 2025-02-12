//P1075 [NOIP2012 普及组] 质因数分解
#include<stdio.h>
int main(){
    int n,i,k=0,flag,l,j;
    scanf("%d",&n);
    int a[100000];
    for(i=2;i<=100000;i++){
        if(i<10){
            for(j=2;j<=i;j++){
                if(i%j==0&&i!=j){
                    break;
                }
                else if(i%j==0&&i==j){
                    a[k++]=i;
                }
            }
        }
        else{
            for(j=2;j<10;j++){
                if(i%j==0){
                    break;
                }
                else if(i%j!=0&&j==9){
                    for(l=0;l<k;l++){
                        if(i%a[l]==0){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1){
                        flag=0;
                        break;
                    }else{
                       a[k++]=i;
                    }
                    
                }
            }
        }
    }
    for(j=0;j<k;j++){
        if(n%a[j]==0){
            printf("%d",n/a[j]);
            break;
        }
    }
    return 0;
}