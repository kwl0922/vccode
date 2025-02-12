//P2141 [NOIP2014 普及组] 珠心算测验
#include<stdio.h>
int main(){
    int m,n,i,j,k,p=0,flag=0,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            if(a[j-1]>a[j]){
                m=a[j-1];
                a[j-1]=a[j];
                a[j]=m;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                if(a[i]+a[j]==a[k]&&a[i]!=a[j]){
                    for(m=0;m<p;m++){
                        if(b[m]==a[k]){
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1){
                        flag=0;
                    }else if(flag==0){
                        b[p++]=a[k];
                        count++;
                    }
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}