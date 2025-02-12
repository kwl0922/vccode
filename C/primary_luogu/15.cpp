//P1909 [NOIP2016 普及组] 买铅笔
#include<stdio.h>
int main(){
    int total,num,price,i,a[3],min;
    scanf("%d",&total);
    for(i=0;i<3;i++){
        scanf("%d%d",&num,&price);
        if(total%num!=0){
            a[i]=(total/num+1)*price;
        }else{
            a[i]=(total/num)*price;
        }
    }
    min=a[0];
    for(i=1;i<3;i++){
        if(min<=a[i]){
            continue;
        }else{
            min=a[i];
        }
    }
    printf("%d",min);
    return 0;
}