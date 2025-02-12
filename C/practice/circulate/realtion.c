#include <stdio.h>

int main(){
    int i;
    while(scanf("%d",&i)){
        if(3<i&&i<10){
            printf("ture\n");
        }
        else{
            printf("false\n");
        }
    }
    return 0;
}