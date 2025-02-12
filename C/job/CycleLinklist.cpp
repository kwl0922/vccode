#include<stdio.h>

typedef int Elemtype;
#define MaxSize 5
typedef struct{
    Elemtype data[MaxSize];
    int front,rear;
}CycleList;

bool CycleListIns(CycleList &CL,Elemtype e)
{
    if((CL.rear+1)%MaxSize==CL.front)
    {
        return false;
    }
    CL.data[CL.rear]=e;
    CL.rear=(CL.rear+1)%MaxSize;
    return true;
}
void CycleListPop(CycleList CL)
{
    Elemtype e;
    while(CL.rear!=CL.front)
    {
        e=CL.data[CL.front];
        CL.front=(CL.front+1)%MaxSize;
        printf("%3d",e);
    }
}
void InitList(CycleList &CL)
{
    CL.front=CL.rear=0;
}

int main()
{
    CycleList CL;
    InitList(CL);
    bool ret;
    CycleListIns(CL,3);
    CycleListIns(CL,4);
    CycleListIns(CL,5);
    CycleListIns(CL,6);
    ret=CycleListIns(CL,7);
    if(ret==false)
    {
        printf("队列已满，插入失败。\n");
    }
    CycleListPop(CL);
    return 0;
}