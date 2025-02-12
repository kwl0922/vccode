#include<stdio.h>
//强制类型转换
int main(){
    short x=-4321;
    unsigned short y=(unsigned short)x;
    printf("x=%d\ny=%d\n",x,y);
    int a=165537,b=-34991;
    short c=(short)a,d=(short)b;
    printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
    int m=x;
    unsigned short n=(unsigned short)x;
    unsigned int p=n;
    printf("m=%d\nn=%d\np=%d\n",m,n,p);
    return 0;
}