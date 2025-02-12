//P1554 梦中的统计
#include<stdio.h>
int main(){
    int a,b,c[10]={0},i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        j=i;
        while(j/10>=0){
            if(j%10==0){
                c[0]++;
            }else if(j%10==1){
                c[1]++;
            }else if(j%10==2){
                c[2]++;
            }else if(j%10==3){
                c[3]++;
            }else if(j%10==4){
                c[4]++;
            }else if(j%10==5){
                c[5]++;
            }else if(j%10==6){
                c[6]++;
            }else if(j%10==7){
                c[7]++;
            }else if(j%10==8){
                c[8]++;
            }else if(j%10==9){
                c[9]++;
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