//P1421 小玉买文具
#include<stdio.h>
int main(){
    float a,b;
    int result;
    scanf("%f%f",&a,&b);
    a+=b/10;
    a/=1.9;
    result=(int)a;
    printf("%d",result);
    return 0;
}