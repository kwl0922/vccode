#include<stdio.h>
#include<stdlib.h>
//读取字符串abcdefghij，然后层次建树建立一颗二叉树，然后前序遍历输出abdhiejcfg，注意不要打印前序遍历几个汉字
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
void preorder(BiTree p){
    if(NULL!=p){
        putchar(p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int main(){
    BiTree tree;
    tree=NULL;
    Btree(tree);
    preorder(tree);
    return 0;
}