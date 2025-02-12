#include<stdio.h>

int main(){
    int a,b=0;
    a=++b;
    printf("a=%d  b=%d\n",a,b);
    a=b++;
    printf("a=%d  b=%d",a,b);
    return 0;
}