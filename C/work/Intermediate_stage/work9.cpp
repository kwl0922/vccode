#include<stdio.h>
#include<stdlib.h>
// 二叉树的带权路径长度（wpl)是二叉树中所有叶结点的带权路径长度和。
// 给定一棵二又树，采用二叉链表存储，结点结构如下：
// left weight right
// 其中叶结点的weight域保存该结点的非负权值。
// 设root为指向T的根结点的指针，请设计求T的WPL的算法，要求：
// 1)给出算法的基本设计思想。
// 2)使用c或c++语言，给出二叉树结点的数据类型定义。
// 3)根据设计思想，采用c或c+语言描述算法，关键之处给出注释。
typedef struct Bitree{
    int weight;
    struct Bitree *left,*right;
}Bitree,*BiTree;
typedef struct Lnode{
    BiTree p;
    struct Lnode* next;
}L,*Linklist;
void Btree(BiTree &tree){
    BiTree pnew;
    Linklist listpnew=NULL,phead=NULL,ptail=NULL,pcur;
    int e;
    while(scanf("%c",&e)){
        if(e!='\n'){
            pnew=(BiTree)calloc(1,sizeof(Bitree));
            pnew->weight=e;
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
                if(NULL==pcur->p->left){
                    pcur->p->left=pnew;
                }
                else if(NULL==pcur->p->right){
                    pcur->p->right=pnew;
                    pcur=pcur->next;
                }
            }
        }
        else{
            break;
        }
    }
}
//deep为路径长度
int wpl_preorder(BiTree p,int deep){
    static int wpl=0;//静态局部变量和全局变量类似，只会初始化一次，区别是只在函数内有效
    if(NULL!=p){
        //如果p为叶子结点，将其weight与deep相乘，结果加到带权路径长度上
        if(p->left==NULL&&p->right==NULL){
            wpl+=(p->weight-48)*deep;//由于p->weight是ascii码值，减48转化为十进制数
        }
        wpl_preorder(p->left,deep+1);
        wpl_preorder(p->right,deep+1);
    }
    return wpl;
}
void WPL(BiTree p){
    int wpl;
    wpl=wpl_preorder(p,0);
    printf("%d",wpl);
}
int main(){
    BiTree tree;
    tree=NULL;
    Btree(tree);
    WPL(tree);
    return 0;
}