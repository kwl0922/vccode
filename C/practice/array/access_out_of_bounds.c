#include <stdio.h>
//访问越界
int main(){
    int a[5]={1,2,3,4,5};
    int j=20;
    int i=10;
    a[5]=6;
    a[6]=7;
    printf("%d",i);
}