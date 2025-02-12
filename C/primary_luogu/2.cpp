//B2029 大象喝水
#include<stdio.h>
int main(){
    float h,r,pai=3.14,v;
    int result;
    scanf("%f%f",&h,&r);
    v=pai*r*r*h;
    v/=1000;
    result=20/v;
        result+=1;
        result=(int)result;
    printf("%d",result);
    return 0;
}