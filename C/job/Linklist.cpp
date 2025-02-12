#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;
typedef struct LNode{
    Elemtype data;
    struct LNode *next;
}LNode,*Linklist;

void Linklisthead(Linklist &L)
{
    L=(Linklist)malloc(sizeof(LNode));
    L->next=NULL;
    LNode* s;
    int x;
    scanf("%d",&x);
    while(x!=9999)
    {
        s=(Linklist)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        scanf("%d",&x);
    }
}
void Linklisttail(Linklist &L)
{
    L=(Linklist)malloc(sizeof(LNode));
    Linklist s,r=L;
    r->next=NULL;
    int x;
    scanf("%d",&x);
    while(x!=9999)
    {
        s=(Linklist)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
}
void printLinklist(Linklist L)
{
    L=L->next;
    while(L!=NULL)
    {
        printf("%d ",L->data);
        L=L->next;
    }
}

Linklist getitem(Linklist L,int a)
{
    Linklist p=L->next;
    int j=1;
    if(a==0)
    return 0;
    if(a<1)
    return NULL;
    while(p&&j<a)
    {
        p=p->next;
        j++;
    }
    return p;
}
void Linklistcent(Linklist L,int i,Elemtype e)
{
    Linklist s,p;
    s=(Linklist)malloc(sizeof(LNode));
    s->data=e;
    if(i==1)
    {
        s->next=L->next;
        L->next=s;
    }
    else
    {
    p=getitem(L,i-1);
    s->next=p->next;
    p->next=s;
    }
}

int main()
{
    Linklist L;
    //Linklisthead(L);
    //printLinklist(L);
    Linklisttail(L);
    //printLinklist(L);
    //getitem(L,2);
    //Linklistcent(L,6,60);
    printLinklist(L);
    return 0;
}