#include <stdio.h>
//求奇数和与偶数和
int main(){
    int i,j;
    for(i=1,j=0;i<=100;i++){
        if(i%2==0){
            continue;
        }
        else{
            j+=i;
        }
    }
    printf("%d\n",j);
    i=1;j=0;
    while(i<=100){
        if(i%2==0){
            i++;
            continue;
        }
        j+=i;
        i++;
    }
    printf("%d\n",j);
    for(i=1,j=0;i<=100;i++){
        if(i%2!=0){
            continue;
        }
        else{
            j+=i;
        }
    }
    printf("%d\n",j);
    i=1;j=0;
    while(i<=100){
        if(i%2!=0){
            i++;
            continue;
        }
        j+=i;
        i++;
    }
    printf("%d",j);
    return 0;
}