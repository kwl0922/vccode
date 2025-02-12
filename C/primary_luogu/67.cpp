//P5733 【深基6.例1】自动修正
#include<stdio.h>
int main(){
    char a[100],e;
    int i=0,j;
    scanf("%c",&e);
    while(e!='\n'){
        a[i++]=e;
        scanf("%c",&e);
    }
    for(j=0;j<i;j++){
        if(a[j]>96&&a[j]<123){
            printf("%c",a[j]-32); 
        }else{
            printf("%c",a[j]); 
        }
    }
    return 0;
}