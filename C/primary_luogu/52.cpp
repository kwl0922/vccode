//P1009 [NOIP1998 普及组] 阶乘之和
#include<stdio.h>
int main(){
    int n,i,q,m,pivot=99;
    scanf("%d",&n);
    int a[100]={0},b[100]={0};
    for(m=1;m<=n;m++){
    for(i=m;i>=1;i--){
        if(i==m&&i>=10){
            a[pivot]=i%10;
            a[pivot-1]=i/10;
            pivot--;
        }else if(i==m&&i<10){
            a[pivot]=i;
        }else{
        for(q=pivot;q<100;q++){
            a[q]*=i;
        }
        for(q=99;q>=pivot;q--){
            if(a[q]>=10){
                a[q-1]+=a[q]/10;
                a[q]%=10;
                if(q==pivot){
                    pivot--;
                }
            }
        }          
        }
    }
    for(i=pivot;i<100;i++){
        b[i]+=a[i];
    }
    for(i=pivot;i<100;i++){
        a[i]=0;
    }
    pivot=99;
    }
    for(i=99;i>0;i--){
        if(b[i]>=10){
            b[i-1]+=b[i]/10;
            b[i]%=10;
        }
    }
    for(i=0;i<100;i++){
        if(b[i]==0){
            continue;
        }else{
            pivot=i;
            break;
        }
    }
    for(i=pivot;i<100;i++){
        printf("%d",b[i]);
    }
    return 0;
}