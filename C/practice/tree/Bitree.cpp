#include"Bitree.h"
//二叉树
//建树
void init(BiTree &tree){
    BiTree pnew;//每次申请的结点
    char e;//要储存的元素
    //定义队列的头尾指针(phead,ptail)，用listpnew指向每次申请的结点，pcur指向要进入树的父亲结点
    Pointer phead=NULL,ptail=NULL,listpnew=NULL,pcur;
    //abcdefghij
    printf("请输入待插入元素：\n");
    while(scanf("%c",&e)){
        if(e=='\n'){
            break;
        }
        //calloc申请的空间大小是两个参数相乘，同时将空间初始化，赋值为NULL，即0。
        pnew=(BiTree)calloc(1,sizeof(BiTNode));
        pnew->data=e;//将该元素存入树的结点
        listpnew=(Pointer)calloc(1,sizeof(Q));//定义一个队列结点
        listpnew->p=pnew;//将该结点的地址存入队列
        //判断第一个元素是否为树的根结点
        if(NULL==tree){
            tree=pnew;//tree指向第一个结点
            phead=listpnew;//三个指针全部指向新申请的结点
            ptail=listpnew;
            pcur=listpnew;//pcur指向要进入树的父亲结点
        }
        else{
            //队列尾插法
            ptail->next=listpnew;
            ptail=listpnew;
            if(NULL==pcur->p->lchild){
                pcur->p->lchild=pnew;
            }
            else if(NULL==pcur->p->rchild){
            pcur->p->rchild=pnew;
            pcur=pcur->next;//当第一个父结点插满后，指向下一个父结点
            }
        }
    }
}
//先序遍历
void preorder(BiTree p){
    if(NULL!=p){
        putchar(p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
//中序遍历
void inorder(BiTree p){
    if(NULL!=p){
        inorder(p->lchild);
        putchar(p->data);
        inorder(p->rchild);
    }
}
//后序遍历
void postorder(BiTree p){
    if(NULL!=p){
        postorder(p->lchild);
        postorder(p->rchild);
        putchar(p->data);
    }
}
//层序遍历
void levelorder(BiTree p,Que &Q){
    Enqueue(Q,p);
    BiTree q;
    while(isempty(Q)){
        Outqueue(Q,q);
        if(q->lchild!=NULL){
            Enqueue(Q,q->lchild);
        }
        if(q->rchild!=NULL){
            Enqueue(Q,q->rchild);
        }
    }
}
int main(){
    BiTree tree=NULL;//树的根节点
    init(tree);
    Que Q;
    initqueue(Q);
    printf("----------先序遍历----------\n");
    preorder(tree);
    printf("\n----------中序遍历----------\n");
    inorder(tree);
    printf("\n----------后序遍历----------\n");
    postorder(tree);
    printf("\n----------层序遍历----------\n");
    levelorder(tree,Q);
    return 0;
}