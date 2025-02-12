#include<stdio.h>
#include<stdlib.h>

typedef struct Lnode{
    int data;
    struct Lnode* next;
}Lnode,*Linklist;

void print(Linklist L){//遍历带头结点的链表
    while(L->next){
        L=L->next;
        printf("%-2d",L->data);
    }
    printf("\n");
}
void print1(Linklist L){//遍历不带头结点的链表
    while(L){
        printf("%-2d",L->data);
        L=L->next;
    }
    printf("\n");
}
void tail_ins(Linklist &L,int &n,Linklist p){//尾插法
    int e,j;
    printf("请输入要插入元素个数：\n");
    scanf("%d",&n);
    printf("请输入要插入元素：\n");
    Linklist q;
    for(j=0;j<n;j++){
        scanf("%d",&e);
        q=(Linklist)malloc(sizeof(Lnode));
        q->data=e;
        q->next=p->next;
        p->next=q;
        p=p->next;
    }
    printf("链表L的顺序为：\n");
    print(L);
}
void seperate(Linklist &L1,Linklist L,int n,Linklist p){//将L分为上下段，L1指向下半段，L1不带头结点
    int i;
    if(n%2==0){
        for(i=0;i<n/2;i++){
            p=p->next;
        }
        L1=p->next;
        p->next=NULL;
    }
    else{
        for(i=0;i<n/2+1;i++){
            p=p->next;
        }
        L1=p->next;
        p->next=NULL;
    }
    printf("分离后链表L的顺序为：\n");
    print(L);
    printf("链表L1的顺序为：\n");
    print1(L1);
}
void reverse(Linklist &L1,int n){//将L1内元素逆序
    Linklist p=L1,q=L1;
    int e1,e2;//e1存储q指向的元素，e2存储p指向的元素
    int j=n/2;//L1的长度
    while(j>=1){
        e1=q->data;//将链表的第一个元素储存
        for(int i=1;i<j;i++){
            q=q->next;
        }
        e2=q->data;//将链表的最后一个元素储存
        q->data=e1;//将链表的第一个元素插入最后一个位置
        p->data=e2;//将链表的最后一个元素插入第一个位置
        p=p->next;//p指向L1的第二个元素
        q=p;
        j-=2;//已经有两个元素完成了交换
    }
    printf("链表L1逆置后的顺序为：\n");
    print1(L1);
}
void combine(Linklist &L,Linklist L1){
    Linklist p=L1,q=L->next;
    while(p){
        L1=p->next;
        p->next=q->next;
        q->next=p;
        q=p->next;
        p=L1;
    }
    printf("链表L与L1的逆序合并后的顺序为：\n");
    print(L);
}
int main(){
    int n;
    Linklist L=(Linklist)malloc(sizeof(Lnode));
    L->next=NULL;
    Linklist p=L,L1;
    tail_ins(L,n,p);
    seperate(L1,L,n,p);
    reverse(L1,n);
    combine(L,L1);
    return 0;
}