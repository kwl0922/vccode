#include<stdio.h>
//初始化顺序表1,2,3，输入6，插入第二个位置；
//输入1，删除第一个位置的元素，输入位置不合法时，输出false
#define MaxSize 10
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int len;
}s;

int main(){
    s s;
    int e,pos,i,j;
    s.len=3;
    j=s.len;
    s.data[0]=1;
    s.data[1]=2;
    s.data[2]=3;
    scanf("%d",&e);
    for(;j>=2;j--){
        s.data[j]=s.data[j-1];
    }
    s.data[j]=e;
    s.len++;
    for(i=0;i<s.len;i++){
        printf("%-3d",s.data[i]);
    }    
    printf("\n");
    scanf("%d",&pos);
    if(pos>0&&pos<=s.len){
    for(j=pos;j<=s.len;j++){
        s.data[j-1]=s.data[j];
    }
    s.len--;
    for(i=0;i<s.len;i++){
        printf("%-3d",s.data[i]);
    }
    }
    else{
        printf("false");
    }
}