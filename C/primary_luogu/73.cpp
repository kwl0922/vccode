//P1308 [NOIP 2011 普及组] 统计单词数
#include<stdio.h>
#include<string.h>

int main(){
    int i,j=0,k=0,len=0,count=0,pos;
    char a[10],b[100],e,flag='0';
    scanf(" %c",&e);
    while(e!='\n'){
        a[len++]=e;
        scanf("%c",&e);
    }
    scanf(" %c",&e);
    while(e!='\n'){
        b[j++]=e;
        scanf("%c",&e);
    }
    b[j++]='\0';
    for(i=0;i<j;i++){
        if(b[i]==' '||b[i]=='\0'){
            if(k==len){
                count++;
            }
            if(flag=='0'){
                pos=i-len;
                flag='1';
            }
            k=0;
            continue;
        }
        if((a[k]==b[i]||a[k]+32==b[i]||a[k]-32==b[i])&&k<len){
            k++;
        }else{
            k=0;
            while(b[i]!=' '&&b[i]!='\0')
            {
                i++;
            }
        }
    }
    printf("%d",count>0?count:-1);
    if(count>0){
        printf(" %d",pos);
    }
    return 0;
}