#include<stdio.h>

int main(){
    int i=1,j;
    j=(++i)+(++i);
    printf("%d\n%d",i,j);
    return 0;
}