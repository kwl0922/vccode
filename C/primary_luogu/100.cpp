//P1303 A*B Problem
#include<stdio.h>
#include<string.h>

void init(char *array){
    for(int i=0;i<2001;i++){
        array[i]='0';
    }
}

void swap(char *array,int len){
    len--;
    int i=2000;
    while(len>=0){
        array[i--]=array[len--];
    }
}
int main(){
    char a[2001],b[2001],c[3001];
    init(a);init(b);
    for(int i=0;i<3001;i++){
        c[i]='0';
    }
    int len_a,len_b,i,j,k;
    scanf(" %s %s",a,b);
    len_a=strlen(a);len_b=strlen(b);
    swap(a,len_a);swap(b,len_b);
    for(i=2000;i>2000-len_a;i--){
        k=i+1000;
        for(j=2000;j>2000-len_b;j--){
            c[k-1]=((c[k-1]-'0')+(((a[i]-'0')*(b[j]-'0'))/10))+'0';
            c[k]=((c[k]-'0')+((a[i]-'0')*(b[j]-'0'))%10)+'0';
            c[k-1]=((c[k-1]-'0')+((c[k]-'0')/10))+'0';
            c[k]=((c[k]-'0')%10)+'0';
            c[k-2]=((c[k-2]-'0')+((c[k-1]-'0')/10))+'0';
            c[k-1]=((c[k-1]-'0')%10)+'0';
            k--;
        }
    }
    i=0;
    while(c[i]=='0'){
        i++;
        if(i==3001){
            printf("0");
            return 0;
        }
    }
    for(j=i;j<3001;j++){
        printf("%c",c[j]);
    }
    return 0;
}