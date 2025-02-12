#include<stdio.h>
#include<stdlib.h>
//链表实现队列，入队1,2,3,4
typedef struct queue{//定义链表
    int data;
    struct queue* next;
}Queue;
typedef struct{//定义指向链表头尾的指针
    Queue *front,*rear;
}Q;
void Enqueue(Q &Q,int e){
    Queue *p=(Queue*)malloc(sizeof(Queue));
    p->data=e;
    p->next=NULL;
    Q.rear->next=p;
    Q.rear=p;
}
bool Outqueue(Q &Q){
    int e;
    Queue *p;
    e=Q.front->next->data;
    printf("%-2d",e);
    p=Q.front;
    Q.front=Q.front->next;
    free(p);
    if(Q.front==Q.rear){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    Q Q;
    Q.front=Q.rear=(Queue*)malloc(sizeof(Queue));
    Q.front->next=NULL;
    bool ret;
    Enqueue(Q,1);
    Enqueue(Q,2);
    Enqueue(Q,3);
    Enqueue(Q,4);
    ret=Outqueue(Q);
    ret=Outqueue(Q);
    ret=Outqueue(Q);
    ret=Outqueue(Q);
    if(ret==false){
        printf("\n队列已空！");
    }
}