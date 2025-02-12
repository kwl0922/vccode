//P1914 小书童——凯撒密码
#include<stdio.h>
int main(){
    int n,i=0,j=0,k;
    scanf("%d",&n);
    char x[50],e,s[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(i=0;i<50;i++){
        x[i]='1';
    }
    scanf(" %s",x);
    while(x[j]!='1'){
        for(k=0;k<26;k++){
            if(x[j]==s[k]){
                printf("%c",s[(k+n)%26]);
                break;
            }
        }
        j++;
    }
    return 0;
}