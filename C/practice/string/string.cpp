#include<stdlib.h>
#include<stdio.h>

typedef struct String{
    char *data;
    int len;
}S;
void print(S S){
    for(int i=0;i<S.len;i++){
        printf("%-c",S.data[i]);
    }
    printf("\n");
}
void init(S &S){
    char e;
    while(scanf("%c",&e)){
        if(e=='\n'){
            break;
        }
        S.data[S.len++]=e;
    }
    print(S);
}
void SubString(S &Sub,S S,int pos,int len){//按位置求子串
    int j=0;
    while(len){
        Sub.data[j++]=S.data[pos-1];
        pos++;
        Sub.len++;
        len--;
    }
    print(Sub);
}
int Strcompare(S S1,S Sub){//串的比较
    int low1=0,low2=0;
    if(S1.data[low1]-Sub.data[low2]==0){
        while(S1.data[low1]==Sub.data[low2]&&low1<S1.len&&low2<Sub.len){
        low1++;
        low2++;
        }
        if(S1.len==Sub.len){
            return 0;
        }else if(S1.len>Sub.len){
            return 1;  
        }else if(S1.len<Sub.len){
            return -1;  
        }
    }else if(S1.data[low1]-Sub.data[low2]>0){
        return 1;
    }else if(S1.data[low1]-Sub.data[low2]<0){
        return -1;
    }
    return 0;
}
int Index(S S1,S S2){//匹配串的位置
    int i,j,k=0,flag=0;
    for(i=0;i<S1.len-S2.len+1;i++){
        if(S1.data[i]!=S2.data[k]){
            continue;
        }
        for(j=i;k<S2.len;k++,j++){
            if(S1.data[j]==S2.data[k]){
                flag=1;
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        k=0;
        if(flag==1){
            return i;
            break;
        }
    }
    return 0;
}
int main(){
    S S,Sub;
    S.len=0;
    Sub.len=0;
    S.data=(char*)malloc(sizeof(char)*20);
    init(S);
    Sub.data=(char*)malloc(sizeof(char)*20);
    int pos=3,len_Sub=5;
    SubString(Sub,S,pos,len_Sub);
    int ret1=Strcompare(S,Sub);
    printf("%d\n",ret1);
    int ret2=Index(S,Sub);
    printf("%d\n",ret2+1);
    return 0;
}