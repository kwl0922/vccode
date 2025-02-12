//P1422 小玉家的电费
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<=150){
        printf("%.1lf",1.0*num*0.4463);
    }else if (num>150&&num<=400)
    {
        printf("%.1lf",1.0*150*0.4463+1.0*(num-150)*0.4663);
    }else{
        printf("%.1lf",1.0*150*0.4463+1.0*250*0.4663+1.0*(num-400)*0.5663);
    }
    return 0;
}