//P1046 [NOIP2005 普及组] 陶陶摘苹果
#include<stdio.h>
int main(){
    int array[10],high,i,count=0;
    for(i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&high);
    high+=30;
    for(i=0;i<10;i++){
        if(array[i]<=high){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}