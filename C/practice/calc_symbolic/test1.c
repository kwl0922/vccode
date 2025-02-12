#include<stdio.h>
int main()
{
    int a=1,b=-1,c=2e3;
    float d=2e-3;
    while (a>0&&b<0)
    {
        printf("c=%d,d=%.3f\n",c,d);
        break;
    }
    return 0;
}