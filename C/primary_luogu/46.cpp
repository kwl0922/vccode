//P1047 [NOIP2005 普及组] 校门外的树
#include<stdio.h>
int main(){
    int a,b,i,j,m,n,count=0;
    scanf("%d%d",&a,&b);
    a+=1;
    int array[a];
    for(i=0;i<a;i++){
        array[i]=1;
    }
    for(i=0;i<b;i++){
        scanf("%d%d",&m,&n);
        for(j=m;j<=n;j++){
            array[j]=0;
        }
    }
    for(i=0;i<a;i++){
        if(array[i]==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}