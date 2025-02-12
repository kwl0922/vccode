#include<stdio.h>
#include<stdlib.h>
//单链表
typedef int ElemType;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*Linklist;
//初始化
void init(int &i,int &j){
    printf("请输入要插入的元素个数：\n");
    scanf("%d",&i);
    printf("请选择插入方式：(1.尾插法 0.头插法)\n");
    scanf("%d",&j);
    printf("请输入要插入的元素：\n");
}
//打印链表
void print(Linklist L){
    printf("当前链表顺序为：\n");
    while(L->next!=NULL){
        L=L->next;
        printf("%-2d",L->data);
    }
}
//尾插法
bool tail_ins(LNode *&L,int i,int e){
    int j;
    Linklist p,q=L;//定义链表指针
    q->next=NULL;
    for(j=0;j<i;j++){
        scanf("%d",&e);
        p=(Linklist)malloc(sizeof(LNode));//每次申请一个空间储存元素
        p->data=e;
        q->next=p;
        q=p;
    }
    q->next=NULL;
    return true;
}
//头插法
bool head_ins(Linklist &L,int i,int e){
    int j;
    L->next=NULL;
    for(j=0;j<i;j++){
        scanf("%d",&e);
        Linklist p=(Linklist)malloc(sizeof(LNode));
        p->data=e;
        p->next=L->next;
        L->next=p;
    }
    return true;
}
//删除元素
bool del(Linklist &L){
    int i,j;
    printf("请输入要删除的元素位置：\n");
    scanf("%d",&i);//i是要删除元素的位置
    Linklist p=L,q;
    for(j=0;j<i;j++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
    printf("删除成功！\n");
    print(L);
    free(p);
    return true;
}
bool ser(Linklist L){
    int i,e;
    printf("请输入要查询的元素值：\n");
    scanf("%d",&e);
    for(i=0;i>=0;i++){
        L=L->next;
        if(L->data==e){
            printf("查询成功，所查元素在第%d个位置。\n",i+1);
            return true;
            break;
        }
    }
    printf("查询失败!");
    return false;
}
int main(){
    int i,j,e;//i是要插入的元素个数，e是每次读取的元素
    Linklist L=(Linklist)malloc(sizeof(LNode));//定义头结点
    init(i,j);
    j&&tail_ins(L,i,e);
    j||head_ins(L,i,e);
    print(L);
    printf("\n是否要删除元素？(1.是 0.否)\n");
    scanf("%d",&j);
    j&&del(L);
    printf("\n是否要查询元素？(1.是 0.否)\n");
    scanf("%d",&j);
    j&&ser(L);
    print(L);
    return 0;
}