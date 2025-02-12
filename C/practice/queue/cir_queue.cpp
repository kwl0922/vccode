#include<stdio.h>
//循环队列
#define MaxSize 5
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int front,rear;
}Circle;
void print(Circle Q){
    while(Q.front!=Q.rear){
        printf("%2d",Q.data[Q.front]);
        Q.front=(Q.front+1)%MaxSize;
    }
}
void queue(Circle &Q){
    int e;
    while((Q.rear+1)%MaxSize!=Q.front){
        scanf("%d",&e);
        Q.data[Q.rear]=e;
        Q.rear=(Q.rear+1)%MaxSize;
    }
    e=0;
    scanf("%d",&e);
    if(e!=0){
        printf("false\n");
    }
}
int main(){
    Circle Q;
    Q.front=0;
    Q.rear=0;
    queue(Q);
    print(Q);
    return 0;
}