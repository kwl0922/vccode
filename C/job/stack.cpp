#include<stdio.h>
#include<stdlib.h>

#define MaxSize 50
typedef int Elemtype;
typedef struct{
    Elemtype data[MaxSize];
    int top;
}Stack;

void Initstack(Stack &S)
{
    S.top=-1;
}
bool EmptyStack(Stack S)
{
    if(S.top==-1)
    {
        return true;
    }
    return false;
}
bool Push(Stack &S,Elemtype e)
{
    if(S.top==MaxSize-1)
    {
        return false;
    }
    S.data[++S.top]=e;
    return true;
}
int Gettop(Stack S)
{
    return S.top;
}
void Pop(Stack &S)
{
    int s;
    Elemtype e;
    s=Gettop(S);
    while(S.top!=-1)
    {
        e=S.data[S.top--];
        printf("%3d",e);
    }
}

int main()
{
    Stack S;
    bool ret;
    Initstack(S);
    ret=EmptyStack(S);
    if(ret)
    {
        printf("栈是空的。\n");
    }
    else
    {
        printf("栈不是空的。\n");
    }
    Push(S,3);
    Push(S,4);
    Push(S,5);
    Pop(S);
}