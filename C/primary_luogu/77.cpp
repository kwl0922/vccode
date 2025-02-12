//P1553 数字反转（升级版）
#include<stdio.h>
#include<string.h>

int exe(char flag,int pos,int len,char *a,char *b){
    int k,j,i,pivot;
        k=0;
        j=pos;
        while(a[j-1]=='0'&&j>1){
            j--;
        }
        for(i=0;i<j/2;i++){
            pivot=a[i];
            a[i]=a[j-1-i];
            a[j-1-i]=pivot;
        }
        for(i=0;i<j;i++){
            b[k++]=a[i];
        }
        if(flag=='1'){
            b[k++]='.';
        }else if(flag=='2'){
            b[k++]='/';
        }else if(flag=='3'){
            b[k++]='%';
        }
        if(flag=='1'&&pos+1==len-1){
            b[k++]=a[pos+1];
            b[k]='\0';
            return 0;
        }
        if(flag=='1'||flag=='2'){
        j=pos;
        if(flag=='1'){
            while(a[j+1]=='0'&&j<len){
            j++;
            }
        }
        if(flag=='2'){
            while(a[len-1]=='0'){
                len--;
            }
        }
        for(i=j+1;i<(len+j+1)/2;i++){
            pivot=a[i];
            a[i]=a[len+j-i];
            a[len+j-i]=pivot;
        }
        for(i=j+1;i<len;i++){
            b[k++]=a[i];
        }
        }
        b[k++]='\0';
        return 0;
}
int main(){
    char a[21],b[21],len,flag;
    int i,pos;
    scanf("%s",a);
    len=strlen(a);
    if(a[len-1]=='%'){
        flag='3';
        pos=len-1;
    }else{
        for(i=0;i<len;i++){
            if(a[i]=='.'){
                flag='1';
                pos=i;
                break;
            }else if(a[i]=='/'){
                flag='2';
                pos=i;
                break;
            }
        }
    }
    if(i==len){
        flag='4';
        pos=i;
    }
    exe(flag,pos,len,a,b);
    puts(b);
    return 0;
}