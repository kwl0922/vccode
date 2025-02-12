#include<stdio.h>
#include<stdlib.h>
//输入3 4 5 6 7 9999一串整数，9999代表结束，通过头插法新建链表，并输出，通过尾插法新建链表并输出。
typedef struct Lnode{
    int data;
    struct Lnode* next;
}Lnode,*LinkList;

void head_ins(LinkList &L){
    int e;
    LinkList p;
    scanf("%d",&e);
    while(e!=9999){
        p=(LinkList)malloc(sizeof(Lnode));
        p->data=e;
        p->next=L->next;
        L->next=p;
        scanf("%d",&e);
    }
}
void tail_ins(LinkList &L){
    int e;
    LinkList p=L,q;
    scanf("%d",&e);
    while(e!=9999){
        q=(LinkList)malloc(sizeof(Lnode));
        q->data=e;
        q->next=p->next;
        p->next=q;
        p=q;
        scanf("%d",&e);
    }
}

void print(LinkList L){
    while(L->next){
        L=L->next;
        printf("%-2d",L->data);
    }
    printf("\n");
}

int main(){
    LinkList Lhead=(LinkList)malloc(sizeof(Lnode));
    Lhead->next=NULL;
    LinkList Ltail=(LinkList)malloc(sizeof(Lnode));
    Ltail->next=NULL;
    head_ins(Lhead);
    print(Lhead);
    tail_ins(Ltail);
    print(Ltail);
    return 0;
}