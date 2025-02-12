//P5714 【深基3.例7】肥胖问题
#include<stdio.h>
int main(){
    double m,h;
    scanf("%lf%lf",&m,&h);
    m/=h*h;
    if(m<18.5){
        printf("Underweight");
    }
    else if (m>=18.5&&m<24)
    {
        printf("Normal");
    }
    else{
        printf("%.4lf\n",m);
        printf("Overweight");
    }
    return 0;
}