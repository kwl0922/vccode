//P1125 [NOIP2008 提高组] 笨小猴
#include<stdio.h>
int main(){
    int i,k=0,flag,l,j,maxn,minn,a[100],m,n=0;
    char x[100],y[100];
    for(i=0;i<100;i++){
        x[i]='1';
    }
    for(i=2;i<=100;i++){
        if(i<10){//找出10以内的质数
            for(j=2;j<=i;j++){
                if(i%j==0&&i!=j){
                    break;
                }
                else if(i%j==0&&i==j){
                    a[k++]=i;
                    //printf("%d\n",i);
                }
            }
        }
        else{
            for(j=2;j<10;j++){//先判断能否被10以内的数整除
                if(i%j==0){
                    break;
                }
                else if(i%j!=0&&j==9){
                    for(l=0;l<k;l++){//判断能否被已经求出的质数整除
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
                        //printf("%d\n",i); 
                    }
                }
            }
        }
    }
    i=0;l=1;
    scanf("%s",x);
    while(x[i]!='1'){
        i++;
    }
    i--;
    for(j=0;j<i;j++){
        if(j==0){
            y[n++]=x[j];
        }
        if(j>0){
            for(m=0;m<n;m++){
                if(y[m]==x[j]){
                    break;
                }
            }
        }
        if(m==n){
            y[n++]=x[j];
        }else if(m!=n&&j!=0){
            continue;
        }
        for(k=j+1;k<i;k++){
            if(x[j]==x[k]){
                l++;
            }
        }
        if(j==0){
            maxn=l;
            minn=l;
        }
        if(l>maxn){
            maxn=l;
        }
        if(l<minn){
            minn=l;
        }
        l=1;
    }
    flag=0;
    for(i=0;i<k;i++){
        if(maxn-minn==a[i]){
            printf("Lucky Word\n%d",a[i]);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("No Answer\n0");
    }
    return 0;
}