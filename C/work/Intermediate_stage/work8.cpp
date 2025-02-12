#include<stdio.h>
#include<stdlib.h>
//读取字符串abcdefghij，然后层次建树建立一颗二叉树，
//然后中序遍历输出 hdibjeafcg，后序遍历输出 hidjebfgca，层序遍历输出abcdefghij，
//注意不要输出汉字
typedef struct Bitree{
    char data;
    struct Bitree *lchild,*rchild;
}Bitree,*BiTree;
typedef struct Lnode{
    BiTree p;
    struct Lnode* next;
}L,*Linklist;
void Btree(BiTree &tree){
    BiTree pnew;
    Linklist listpnew=NULL,phead=NULL,ptail=NULL,pcur;
    char e;
    while(scanf("%c",&e)){
        if(e!='\n'){
            pnew=(BiTree)calloc(1,sizeof(Bitree));
            pnew->data=e;
            listpnew=(Linklist)calloc(1,sizeof(L));
            listpnew->p=pnew;
            if(NULL==tree){
                tree=pnew;
                phead=listpnew;
                ptail=listpnew;
                pcur=listpnew;
            }
            else{
                ptail->next=listpnew;
                ptail=ptail->next;
                if(NULL==pcur->p->lchild){
                    pcur->p->lchild=pnew;
                }
                else if(NULL==pcur->p->rchild){
                    pcur->p->rchild=pnew;
                    pcur=pcur->next;
                }
            }
        }
        else{
            break;
        }
    }
}
void inorder(BiTree p){
    if(NULL!=p){
        inorder(p->lchild);
        putchar(p->data);
        inorder(p->rchild);
    }
}
void postorder(BiTree p){
    if(NULL!=p){
        postorder(p->lchild);
        postorder(p->rchild);
        putchar(p->data);
    }
}
typedef struct Queue{
    BiTree q;
    struct Queue* next;
}Q;
typedef struct{
    Q *front,*rear;
}Qu;
void Enqueue(Qu &P,BiTree &e){
    Q *p;
    p=(Q*)malloc(sizeof(Q));
    p->q=e;
    P.rear->next=p;
    P.rear=P.rear->next;
}
void Outqueue(Qu &P,BiTree &e){
    Q *p;
    p=P.front;
    e=P.front->next->q;
    putchar(e->data);
    P.front=P.front->next;
    free(p);
}
bool isempty(Qu P){
    return P.front==P.rear;
}
void levelorder(Qu &P,BiTree p){
    Enqueue(P,p);
    BiTree q;
    while(!isempty(P)){
        Outqueue(P,q);
        if(NULL!=q->lchild){
            Enqueue(P,q->lchild);
        }
        if(NULL!=q->rchild){
            Enqueue(P,q->rchild);
        }
    }
}
int main(){
    BiTree tree;
    tree=NULL;
    Btree(tree);
    inorder(tree);
    printf("\n");
    postorder(tree);
    printf("\n");
    Qu P;
    P.front=P.rear=(Q*)malloc(sizeof(Q));
    P.front->next=NULL;
    levelorder(P,tree);
    return 0;
}