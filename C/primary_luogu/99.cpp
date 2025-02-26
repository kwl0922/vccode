//P1601 A+B Problem（高精）
#include<stdio.h>
#include<string.h>

void init(char *array){
    for(int i=0;i<501;i++){
        array[i]='0';
    }
}

void swap(char *array,int len){
    len--;
    int i=500;
    while(len>=0){
        array[i--]=array[len--];
    }
}
int main(){
    char a[501],b[501];
    init(a);init(b);
    int len_a,len_b,i;
    scanf(" %s %s",a,b);
    len_a=strlen(a);len_b=strlen(b);
    swap(a,len_a);swap(b,len_b);
    if(len_a<len_b){
        len_a=len_b;
    }
    for(i=500;i>500-len_a;i--){
        a[i-1]=((a[i-1]-'0')+(((a[i]-'0')+(b[i]-'0'))/10))+'0';
        a[i]=(((a[i]-'0')+(b[i]-'0'))%10)+'0';
    }
    if(a[i]!='0'){
        for(len_b=i;len_b<501;len_b++){
            printf("%c",a[len_b]);
        }
    }else{
        for(len_b=i+1;len_b<501;len_b++){
            printf("%c",a[len_b]);
        }
    }
    return 0;
}