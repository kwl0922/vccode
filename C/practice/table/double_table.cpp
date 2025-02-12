#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//不带头结点的双链表
typedef struct Dnode{
    int data;
    struct Dnode *prior,*rear;
}Dnode,*DLinklist;
void print_sequence(DLinklist D){//顺序遍历
    while(D!=NULL){
        printf("%-3d",D->data);
        D=D->rear;
    }
}
void print_reverse(DLinklist D){//逆序遍历
    while(D->rear!=NULL){
        D=D->rear;
    }
    while(D!=NULL){
        printf("%-3d",D->data);
        D=D->prior;
    }
}
void init(DLinklist &D){
    D=(DLinklist)malloc(sizeof(Dnode));
    srand(time(NULL));
    D->data=rand()%100;
    D->prior=NULL;
    D->rear=NULL;
}
void tail_ins(DLinklist &D){//尾插法
    DLinklist p,q=D;
    srand(time(NULL));
    for(int i=1;i<10;i++){
        p=(DLinklist)malloc(sizeof(Dnode));
        p->data=rand()%100;
        p->rear=q->rear;
        p->prior=q;
        q->rear=p;
        q=p;
    }
    print_sequence(D);
    printf("\n");
    print_reverse(D);
    printf("\n");
    printf("------------------------------\n");
}
void head_ins(DLinklist &D){//头插法
    DLinklist p;
    srand(time(NULL));
    for(int i=1;i<10;i++){
        p=(DLinklist)malloc(sizeof(Dnode));
        p->data=rand()%100;
        p->rear=D->rear;
        if(D->rear!=NULL){
            D->rear->prior=p;
        }
        p->prior=D;
        D->rear=p;
    }
    print_sequence(D);
    printf("\n");
    print_reverse(D);
}
int main(){
    DLinklist D_tail,D_head;
    init(D_tail);
    init(D_head);
    tail_ins(D_tail);
    head_ins(D_head);
    return 0;
}