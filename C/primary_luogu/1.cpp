//P5705 【深基2.例7】数字反转
#include<stdio.h>

int main(){
    float a,d;
    int b=0;
    scanf("%f",&a);
    a*=10;
    int c=(int)a;
    if(c>=1000&&c<=10000){
        while(c/10!=0){
            b=b*10+c%10;
            c/=10;
        }
        b=b*10+c%10;
        d=(float)b;
        d/=1000;
    printf("%.3f",d);
    }
    return 0;
}