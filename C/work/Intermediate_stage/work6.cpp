#include<stdio.h>
#include<stdlib.h>
//用链表实现循环队列，可以申请空间，空间可重复使用
typedef struct queue{
    int data;
    struct queue *next;
}Queue;
//定义指向链表首尾的指针
typedef struct{
    Queue *front,*rear;
}Q;
void print(Q Q){//输出队列
    int e;
    while(Q.front!=Q.rear){
        e=Q.front->next->data;
        printf("%-2d",e);
        Q.front=Q.front->next;
    }
}
void EnQueue(Q &Q,int e){
    printf("%d进队后\n",e);
    if(Q.rear->next==Q.front){//队列满，每次插入需要申请空间
        Queue *p=(Queue*)malloc(sizeof(Queue));
        p->data=e;
        p->next=Q.rear->next;
        Q.rear->next=p;
        Q.rear=p;
    }
    else{//队列未满，无需申请空间，直接插入就好
    Q.rear=Q.rear->next;
    Q.rear->data=e;
    }
    printf("当前队列顺序为：\n");
    print(Q);
    printf("\n");
}
void OutQueue(Q &Q){
    int e;
    e=Q.front->next->data;
    printf("%d出队后\n",e);
    Q.front=Q.front->next;
    printf("当前队列顺序为：\n");
    print(Q);
    if(Q.front==Q.rear){
        printf("队列已空。\n");
    }
    printf("\n");
}
int main(){
    Q Q;
    Q.front=Q.rear=(Queue*)malloc(sizeof(Queue));
    Q.rear->next=Q.front;//初始化循环链表
    //1,2,3进，出1，进2，全出
    EnQueue(Q,1);
    EnQueue(Q,2);
    EnQueue(Q,3);
    OutQueue(Q);
    EnQueue(Q,2);
    OutQueue(Q);
    OutQueue(Q);
    OutQueue(Q);
    //1,2,3进，出1，进2，出前两个
    EnQueue(Q,1);
    EnQueue(Q,2);
    EnQueue(Q,3);
    OutQueue(Q);
    EnQueue(Q,2);
    OutQueue(Q);
    OutQueue(Q);
    return 0;
}