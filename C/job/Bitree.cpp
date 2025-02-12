#include<stdio.h>
#include<stdlib.h>

typedef char ELemtype;
typedef struct Bitree
{
    ELemtype c;
    struct Bitree *lchild;
    struct Bitree *rchild;
}BT,*Bit;
typedef struct list{
    Bit p;
    struct list *next;
}list,*l;
void qianxu(Bit p)
{
    if(p!=NULL)
    {
        putchar(p->c);
        qianxu(p->lchild);
        qianxu(p->rchild);
    }
}

int main()
{
    Bit pnew;
    l list,head=NULL,tail=NULL,cur;
    ELemtype e;
    Bit tree=NULL;
    scanf("%c",&e);
    while(e!='\n'){
        pnew=(Bit)calloc(1,sizeof(BT));
        list=(l)calloc(1,sizeof(list));
        pnew->c=e;
        list->p=pnew;
        if(NULL==tree)
        {
            tree=pnew;
            head=list;
            tail=list;
            cur=list;
            continue;
        }else
        {
            tail->next=list;
            tail=list;
        }
        if(cur->p->lchild==NULL)
        {
            cur->p->lchild=pnew;
        }
        else if(cur->p->rchild==NULL)
        {
            cur->p->rchild=pnew;
            cur=cur->next;
        }
        scanf("%c",&e);
    }
    qianxu(tree);
}