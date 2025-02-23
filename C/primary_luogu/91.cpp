//P1304 哥德巴赫猜想
#include<stdio.h>

int main(){
//埃拉托斯特尼质数筛法
    int n,i,row,p;
    scanf("%d",&n);
    row=(n-2)>>1;
    char prime[n];
    for(i=0;i<n;i++){
        prime[i]='0';
    }
    prime[0]='1';
    prime[1]='1';
    for(i=2;i*i<n;i++){
        if(prime[i]=='0'){
           for(p=i;p<n;p+=i){
                if(p!=i){
                    prime[p]='1';
                }
           } 
        }
    }
//输出
    for(i=1;i<=row;i++){
        for(p=2;p<n;p++){
            if(prime[p]=='0'&&prime[2*i+2-p]=='0'){
                printf("%d=%d+%d\n",2*i+2,p,2*i+2-p);
                break;
            }
        }
    }
    return 0;
}