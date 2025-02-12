#include <stdio.h>

int main()
{
    int a,ret;
    char b;
    float c;
    ret=scanf("%d %c%f",&a,&b,&c);//ret代表scanf函数成功匹配的个数
    printf("a=%d,b='%c',c=%5.2f,ret=%d",a,b,c,ret);
    return 0;
}