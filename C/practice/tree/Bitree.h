#include<stdio.h>
#include<stdlib.h>

//定义树结点
typedef char BiElemType;
typedef struct BiTNode{
    BiElemType data;
    struct BiTNode *lchild;
    struct BiTNode *rchild;
}BiTNode,*BiTree;

//定义辅助队列
typedef struct queue{
    BiTree p;
    struct queue* next;
}Q,*Pointer;

//为层序遍历定义队列
typedef struct Queue{//定义链表
    BiTree data;
    struct Queue* next;
}Queue;
typedef struct{//定义指向链表头尾的指针
    Queue *front,*rear;
}Que;
//入队操作
void initqueue(Que &Q){
    Q.front=Q.rear=(Queue*)malloc(sizeof(Queue));
    Q.front->next=NULL;
}
void Enqueue(Que &Q,BiTree e){
    Queue *p=(Queue*)malloc(sizeof(Queue));
    p->data=e;
    p->next=NULL;
    Q.rear->next=p;
    Q.rear=p;
}
//出队操作
void Outqueue(Que &Q,BiTree &e){
    Queue *p;
    e=Q.front->next->data;
    printf("%c",e->data);
    p=Q.front;
    Q.front=Q.front->next;
    free(p);
}
bool isempty(Que Q){
    if(Q.front==Q.rear){
        return false;
    }
    else{
        return true;
    }
}