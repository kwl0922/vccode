#include<stdio.h>
#include<stdlib.h>

#define MaxSize 50
typedef int Elemtype;

typedef struct
{
   Elemtype data[MaxSize];
   int len;
}Sqlist;


bool Linklistins(Sqlist &L,int i,Elemtype e)
{
    if(i<1||i>L.len+1)
    return false;
    if(L.len>MaxSize)
    return false;
    for(int j=L.len;j>=i;j--)
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.len++;
    return true;
}
bool Linklistdel(Sqlist &L,int i,Elemtype &e)
{
    if(i<1||i>L.len+1)
    return false;
    if(L.len>MaxSize)
    return false;
    e=L.data[i-1];
    for(int j=i;j<L.len;j++)
        L.data[j-1]=L.data[j];
    L.len--;
    return true;
}
bool Linklistcha(Sqlist &L,int i,Elemtype e)
{
    if(i<1||i>L.len+1)
    return false;
    if(L.len>MaxSize)
    return false;
    L.data[i-1]=e;
    return true;
}
bool Linklistmat(Sqlist L,Elemtype e)
{
    int a=1;
    for(int i=0;i<=L.len;i++)
    {
        if(L.data[i-1]==e)
        {a=a*0;
        printf("\n与第%d个位置的数字相匹配",i);}
        else
        a=a*1;
    }
    if(a==0)
    return true;
    else
    return false;
}
int Linklistpri(Sqlist L)
{
    for(int i=0;i<L.len;i++)
    printf("%d ",L.data[i]);
}

int main()
{
    Sqlist L;
    bool ret;
    Elemtype del;
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    L.len=3;
    
    ret=Linklistdel(L,2,del);
    if(ret)
    {
        printf("删除成功\n删除后结果为:");
        Linklistpri(L);
        printf("\n删除元素为%d\n",del);
    }
    else{
        printf("删除失败\n");
    }
    ret=Linklistins(L,2,60);
    if(ret)
    {
        printf("插入成功\n插入后结果为:");
        Linklistpri(L);
    }
    else{
        printf("插入失败\n");
    }
    ret=Linklistcha(L,2,30);
    if(ret)
    {
        printf("\n修改成功\n修改后结果为:");
        Linklistpri(L);
    }
    else{
        printf("修改失败\n");
    }
    ret=Linklistmat(L,3);
    if(ret)
    {
        printf("\n匹配成功\n");
        Linklistpri(L);
    }
    else{
        printf("\n匹配失败\n");
    }
}