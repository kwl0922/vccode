//P1085 [NOIP2004 普及组] 不高兴的津津
#include<stdio.h>
int main(){
    int array[7],i,a,b,maxinum,max;
    for(i=0;i<7;i++){
        scanf("%d%d",&a,&b);
        array[i]=a+b;
    }
    maxinum=array[0];
    for(i=1;i<7;i++){
        if(maxinum<array[i]){
            max=i+1;
            maxinum=array[i];
        }
    }
    printf("%d",max);
    return 0;
}