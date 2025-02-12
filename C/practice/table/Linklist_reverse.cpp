#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//单链表原地逆置
typedef struct Lnode{
    int data;
    struct Lnode* next;
}Lnode,*Linklist;
void print(Linklist L){
    while(L->next!=NULL){
        L=L->next;
        printf("%-3d",L->data);
    }
}
void init(Linklist &L){//尾插法建表
    Linklist q=L,p;
    srand(time(NULL));
    for(int i=0;i<10;i++){
        p=(Linklist)malloc(sizeof(Lnode));
        p->data=rand()%100;
        p->next=q->next;
        q->next=p;
        q=q->next;
    }
    print(L);
    printf("\n");
}
//原地逆置
void reverse(Linklist &L){
    Linklist p=L,q,m=L;
    for(int i=0;i<10;i++){
        while(p->next->next!=NULL){
            p=p->next;
        }
        q=p->next;
        p->next=NULL;
        q->next=m->next;
        m->next=q;
        m=m->next;
        p=m;
    }
    print(L);
}

int main(){
    Linklist L;
    L=(Linklist)malloc(sizeof(Lnode));
    L->next=NULL;
    init(L);
    reverse(L);
    return 0;
}