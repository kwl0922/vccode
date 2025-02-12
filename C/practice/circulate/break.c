#include <stdio.h>
//累加，总和不大于2000
int main(){
    int i,j;
    for(i=1,j=0;i<=100;i++){
        if(j>2000){
            break;
        }
        else{
            j+=i;
        }
    }
    printf("%d\n%d",j-i+1,i-2);
    return 0;
}