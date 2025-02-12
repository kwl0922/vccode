#include<stdio.h>
//新建一个栈，读取标准输入3个整数3 4 5，入栈3 4 5，依次出栈，打印 5 4 3，
//新建循环队列（Maxsize为5），读取标准输入3 4 5 6 7，入队7时，队满，打印false，然后依次出队，输出 3 4 5 6
//栈
typedef struct{
    int data[20];
    int top;
}Stack;
//队列
#define MaxSize 5
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int front,rear;
}Circle;
void push(Stack &s){//入栈
    int n=3,e;//n为入栈元素个数，e为要入栈元素
    s.top=-1;
    while(n){
        scanf("%d",&e);
        s.data[++s.top]=e;
        n--;
    }
}
void pop(Stack s){//出栈
    while(s.top!=-1){
        printf("%2d",s.data[s.top--]);
    }
}
void print(Circle Q){//打印循环队列
    while(Q.front!=Q.rear){
        printf("%2d",Q.data[Q.front]);
        Q.front=(Q.front+1)%MaxSize;
    }
}
void queue(Circle &Q){//入队
    int e;
    while((Q.rear+1)%MaxSize!=Q.front){
        scanf("%d",&e);
        Q.data[Q.rear]=e;
        Q.rear=(Q.rear+1)%MaxSize;
    }
    e=0;
    
}
int main(){
    int e;
    Stack s;//初始化栈
    push(s);
    Circle Q;//初始化队列
    Q.front=0;
    Q.rear=0;
    queue(Q);
    pop(s);
    scanf("%d",&e);
    if(e!=0){
        printf("\nfalse\n");
    }
    print(Q);
    return 0;
}