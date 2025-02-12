#include<stdio.h>
#include<stdlib.h>
//输入3 4 5 6 7 9999一串整数,9999代表结束,通过尾插法新建链表
//查找第2个位置的值并输出，在第2个位置插入99，输出为  3 99  4  5  6  7
//删除第4个位置的值，打印输出为  3 99  4  6  7。
typedef struct Lnode{
    int data;
    struct Lnode* next;
}Lnode,*Linklist;

void PrintList(Linklist L){
    L=L->next;
    while(L!=NULL){
        printf("%3d",L->data);//打印当前结点数据
        L=L->next;//指向下一个结点
    }
    printf("\n");
}
void tail_ins(Linklist &L){
    Linklist p=L,q;
    int e;
    scanf("%d",&e);
    while(e!=9999){
        q=(Linklist)malloc(sizeof(Lnode));
        q->data=e;
        q->next=p->next;
        p->next=q;
        p=p->next;
        scanf("%d",&e);
    }
}
void ser(Linklist L,int pos){
    for(int i=0;i<pos;i++){
        L=L->next;
    }
    printf("%d\n",L->data);
}
void increase(Linklist &L,int pos,int e){
    Linklist p=L,q;
    for(int i=1;i<pos;i++){
        p=p->next;
    }
    q=(Linklist)malloc(sizeof(Lnode));
    q->data=e;
    q->next=p->next;
    p->next=q;
}
void del(Linklist &L,int pos){
    Linklist p=L,q;
    for(int i=1;i<pos;i++){
        p=p->next;
    }
    q=p->next;
    p->next=q->next;
    free(q);
}
int main(){
    Linklist L=(Linklist)malloc(sizeof(Lnode));
    L->next=NULL;
    tail_ins(L);
    int position=2;
    ser(L,position);
    int element=99;
    increase(L,position,element);
    PrintList(L);
    int pos_del=4;
    del(L,pos_del);
    PrintList(L);
    return 0;
}