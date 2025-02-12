//P5723 【深基4.例13】质数口袋
#include<stdio.h>
int main(){
    int n,i,k=0,flag,l,count=0,j,result=0;
    scanf("%d",&n);
    int a[n];
    if(n==0||n==1){
        printf("0\n");
        return 0;
    }
    for(i=2;i<=n;i++){
        if(i<10){
            for(j=2;j<=i;j++){
                if(i%j==0&&i!=j){
                    break;
                }
                else if(i%j==0&&i==j){
                    count++;
                    result+=i;
                    a[k++]=i;
                    if(result>n){
                        result-=i;
                        count--;
                        break;
                    }
                    printf("%d\n",i);
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
                       count++;
                       result+=i;
                       a[k++]=i;
                       if(result>n){
                        result-=i;
                        count--;
                        break;
                        }
                        printf("%d\n",i); 
                    }
                    
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}