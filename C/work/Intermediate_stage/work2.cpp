#include<stdio.h>
#include<stdlib.h>
//将单链表L(a1,a2,a3……an)转换成L(a1,an,a2,a(n-1),a3,a(n-2)……)
//设计思想：用L1指向L的前半段，L2指向L后半段，L3指向L2的逆序
//将L2中的元素用头插法插入L3，结果为L2的逆序,设置指针p,q，分别指向L1与L3的next，
//然后将L3的元素依次插入L1中
typedef struct node{
    int data;
    struct node* next;
}Node;
void tail_ins(Node *&L,int n){//尾插法
    int i,e;//n为要插入元素个数,e为要插入的元素
    Node* q;
    Node* p=L;
    p=L;
    for(i=0;i<n;i++){
        scanf("%d",&e);
        q=(Node*)malloc(sizeof(Node));
        q->data=e;
        p->next=q;
        p=q;
    }
    p->next=NULL;
}
void reverse(Node *L2,Node *&L3,int j){//将L2中的元素用头插法插入L3，结果为L2的逆序
    Node *p;
    p=L2->next;
    for(int i=0;i<j;i++){
        L2->next=p->next;
        p->next=L3->next;
        L3->next=p;
        p=L2->next;//每次插入完，让p重新指向L2->next
    }
}
void print(Node *L){
    while(L->next){
        L=L->next;
        printf("%-2d",L->data);
    }
}
int main(){
    int i,j,k,m,n;//要插入的元素个数
    Node* L=(Node*)malloc(sizeof(Node));//初始化，创建头节点
    L->next=NULL;
    scanf("%d",&n);
    tail_ins(L,n);
    print(L);
    Node *L1,*p;//L1指向L的前半段，L2指向L后半段，L3指向L2的逆序
    Node *L2=(Node*)malloc(sizeof(Node));//初始化，创建头节点
    Node *L3=(Node*)malloc(sizeof(Node));//初始化，创建头节点
    L3->next=NULL;
    L1=L;
    p=L1;
    if(n%2==0){
        j=n/2;
    }
    else if(n%2!=0){
        j=n/2+1;
    }
    for(i=0;i<j;i++){
        p=p->next;
    }
    L2->next=p->next;
    p->next=NULL;
    reverse(L2,L3,n-j);
    printf("\n");
    print(L1);
    printf("\n");
    print(L3);
    printf("\n");
    p=L1;
    Node *q=L3->next;
    // for(i=1;i<=n-j;i++){//方法一，p每次从L1找到要插入位置的前一个位置
    //     for(k=1;k<=2*i-1;k++){//在1,3,5……后面插入
    //         p=p->next;
    //     }
    //     L3->next=q->next;
    //     q->next=p->next;
    //     p->next=q;
    //     p=L1;//p指针复位
    //     q=L3->next;//q指针复位
    // }
    p=p->next;//方法二：p依次向后移动，时间复杂度较小
    while(L3->next){
        L3->next=q->next;
        q->next=p->next;
        p->next=q;
        p=q->next;
        q=L3->next;//q指针复位
    }
    print(L1);
    return 0;
}