#include<stdio.h>
//栈
typedef struct{
    int data[20];
    int top;
}Stack;
void push(Stack &s){//入栈
    int n,e;//n为入栈元素个数，e为要入栈元素
    s.top=-1;
    scanf("%d",&n);
    while(n){
        scanf("%d",&e);
        s.data[++s.top]=e;
        n--;
    }
}
void pop(Stack s){//出栈
    while(s.top!=-1){
        printf("%d ",s.data[s.top--]);
    }
}
int main(){
    Stack s;
    push(s);
    pop(s);
    return 0;
}