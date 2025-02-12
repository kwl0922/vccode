//P3954 [NOIP2017 普及组] 成绩
#include<stdio.h>
int main(){
    float a,b,c;
    int result;
    scanf("%f%f%f",&a,&b,&c);
    result=(int)(a*0.2+b*0.3+c*0.5);
    printf("%d",result);
    return 0;
}