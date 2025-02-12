#include<stdio.h>
#include<stdlib.h>

typedef int Elemtype;

typedef struct Dnode{
    Elemtype data;
    struct Dnode* next;
    struct Dnode* prior;
}Dnode,*Dlist;

void Dlisthead(Dlist &DL)
{
    DL=(Dlist)malloc(sizeof(Dnode));
    DL->prior=NULL;
    DL->next=NULL;
    Dlist s;
    Elemtype e;
    scanf("%d",&e);
    while(e!=9999)
    {
        s=(Dlist)malloc(sizeof(Dnode));
        s->data=e;
        s->next=DL->next;
        if(DL->next!=NULL)
        {
            DL->next->prior=s;
        }
        DL->next=s;
        s->prior=DL;
        scanf("%d",&e);
    }
}
void Dlisttail(Dlist &DL)
{
    DL=(Dlist)malloc(sizeof(Dnode));
    DL->prior=NULL;
    DL->next=NULL;
    Dlist s,r=DL;
    Elemtype e;
    scanf("%d",&e);
    while(e!=9999)
    {
        s=(Dlist)malloc(sizeof(Dnode));
        s->data=e;
        r->next=s;
        s->prior=r;
        r=s;
        scanf("%d",&e);
    }
    r->next=NULL;
}
Dlist GetDlist(Dlist DL, int i)
{
    Dlist s=DL->next;
    int j=1;
    while(s&&j<i)
    {
        s=s->next;
        j++;
    }
    return s;
}
void Dlistcent(Dlist DL,int i,Elemtype e)
{
    Dlist s,r;
    s=(Dlist)malloc(sizeof(Dnode));
    s->data=e;
    if(i!=1)
    {r=GetDlist(DL,i-1);
    s->next=r->next;
    if(r->next)
    {
        r->next->prior=s;
    }
    r->next=s;
    s->prior=r;}
    else
    {
        s->next=DL->next;
        DL->next->prior=s;
        DL->next=s;
        s->prior=DL;
    }
}
void PrintDlist(Dlist DL)
{
    Dlist s=DL->next;
    Elemtype e;
    while(s)
    {
        e=s->data;
        printf("%3d",e);
        s=s->next;
    }
}
void Printfromend(Dlist DL)
{
    Dlist s=DL->next;
    Elemtype e;
    while(s->next)
    {
        s=s->next;
    }
    e=s->data;
    printf("%3d",e);
    while(s->prior!=DL)
    {
        s=s->prior;
        e=s->data;
        printf("%3d",e);
    }
}

int main()
{
    Dlist DL;
    Dlisthead(DL);
    PrintDlist(DL);
    //Dlisttail(DL);
    // PrintDlist(DL);
    //Dlistcent(DL,6,30);
    //PrintDlist(DL);
    //Printfromend(DL);
    return 0;
}