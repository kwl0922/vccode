//P1554 梦中的统计
#include<stdio.h>
int main(){
    int a,b,c[10]={0},i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        j=i;
        while(j/10>=0){
            switch(j%10){
                case 0:c[0]++;break;
                case 1:c[1]++;break;
                case 2:c[2]++;break;
                case 3:c[3]++;break;
                case 4:c[4]++;break;
                case 5:c[5]++;break;
                case 6:c[6]++;break;
                case 7:c[7]++;break;
                case 8:c[8]++;break;
                case 9:c[9]++;break;
                default:break;
            }
            j/=10;
            if(j==0){
                break;
            }
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",c[i]);
    }
    return 0;
}