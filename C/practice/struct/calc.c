#include <stdio.h>

struct calc1
{
    double a;
    char b;
    short c;
};
struct calc2
{
    char a;
    double b;
    short c;
};
struct calc3
{
    int a;
    char b;
    short c;
};
int main(){
    int ret1,ret2,ret3;
    struct calc1 c1;
    struct calc2 c2;
    struct calc3 c3;
    ret1=sizeof(c1);
    ret2=sizeof(c2);
    ret3=sizeof(c3);
    printf("%d\n%d\n%d",ret1,ret2,ret3);
    return 0;
}