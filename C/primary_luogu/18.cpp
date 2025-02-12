//P1424 小鱼的航程（改进版）
#include<stdio.h>
int main(){
    int day,span,count=0;
    scanf("%d%d",&day,&span);
    for(int i=0;i<span%7;i++){
        if((day+i)%7==0||(day+i)%7==6){
            continue;
        }
        else{
            count+=250;
        }
    }
    printf("%d",(span/7)*5*250+count);
    return 0;
}