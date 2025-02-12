#include <stdio.h>
//判断对称数，运用数组将取模结果一一储存，再首末位一一比较。
int main(){
    int i[20],j,k=1,l=0,m=0,n;
    scanf("%d",&n);
    j=n;
    while(j!=0){
        k=j%10;
        j/=10;
        i[l]=k;
        l++;
    }
    k=l;
    while(k>l/2+1){
        if(i[k-1]==i[m]){
            k--;
            m++;
            continue;
        }
        else{
            j=22;
            break;
        }
    }
    if(j==22){
        printf("%d不是对称数！",n);
    }
    else{
        printf("%d是对称数！",n);
    }
    return 0;
}