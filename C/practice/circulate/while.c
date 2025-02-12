#include <stdio.h>
//累加
int main(){
    int i=1,j=0;
    while(i<=100){
        j+=i;
        i++;
    }
    printf("%d\n",j);
    for(i=1,j=0;i<=100;i++){
        j+=i;
    }
    printf("%d",j);
    return 0;
}