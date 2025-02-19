//P5737 【深基7.例3】闰年展示
#include<stdio.h>

int main(){
    int a,b,i,count=0;
    scanf("%d%d",&a,&b);
    int array[b-a];
    for(i=a;i<=b;i++){
        if(i%4==0&&i%100!=0){
            array[count++]=i;
        }else if(i%100==0&&i%400==0){
            array[count++]=i;
        }
    }
    printf("%d\n",count);
    for(i=0;i<count;i++){
        printf("%d ",array[i]);
    }
    return 0;
}