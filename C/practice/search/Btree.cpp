#include<stdio.h>
#include<stdlib.h>
//读取10个元素 87  7 60 80 59 34 86 99 21  3，然后建立二叉查找树，
//中序遍历输出3  7 21 34 59 60 80 86 87 99，
//针对有序后的元素，存入一个长度为10的数组中，通过折半查找找到21的下标（下标为2），然后输出2
//删除指定元素，再遍历
typedef struct Bsearch{
    int data;
    struct Bsearch *lchild,*rchild;
}B,*Bitree;

void search(Bitree &pnew,Bitree &pointer){
        if(pnew->data<pointer->data){
            if(pointer->lchild!=NULL){
                pointer=pointer->lchild;
                search(pnew,pointer);
            }
            else{
                pointer->lchild=pnew;
            }
        }
        else if(pnew->data>=pointer->data){
            if(pointer->rchild!=NULL){
                pointer=pointer->rchild;
                search(pnew,pointer);
            }
            else{
                pointer->rchild=pnew;
            }
        }
}
void Btree(Bitree &tree, Bitree &pointer){
    Bitree pnew;
    int e,n=10;
    while(n){
        scanf("%d",&e);
        pnew=(Bitree)calloc(1,sizeof(B));
        pnew->data=e;
        if(tree==NULL){
            tree=pnew;
            pointer=tree;
        }
        else{
        search(pnew,pointer);
        pointer=tree;
        }
        n--;
    }
}
void in_order(Bitree p,int* a){
    static int i=0;
    if(p!=NULL){
        in_order(p->lchild,a);
        printf("%3d",p->data);
        a[i++]=p->data;
        in_order(p->rchild,a);
    }
}
int bisearch(int *a){
    int low=0,high=10-1,mid;
    int e=7;
    if(e==a[low]){
        return low+1;
    }
    else if(e==a[high]){
        return high+1;
    }
    else{
        while(low+1!=high){
            mid=(low+high)/2;
            if(e==a[mid]){
                return mid+1;
            }
            else if(e>a[mid]){
                low=mid;
            }
            else if(e<a[mid]){
                high=mid;
            }
        }
        return 0;
    }
}
//删除思路：找到待删除点左子树的最右结点，赋值给待删除元素
//如果左子树没有右结点，则将待删除结点的左孩子顶替待删结点
void dele(Bitree &p,int del){
    if(p->data==del){
        Bitree pt=p;
        if(p->lchild!=NULL){
            p=p->lchild;
            Bitree q=p;
            if(q->rchild!=NULL){//若左子树有最右结点，找到并将值赋给待删结点
                while(q->rchild!=NULL){
                q=q->rchild;
                }
                pt->data=q->data;
                q=NULL;
                free(q); 
            }
            else{
                p->rchild=pt->rchild;
                free(pt);
            }
        }
        else if(p->rchild!=NULL){
            p=p->rchild;
            free(pt);
        }
        else{
            p=NULL;
            free(pt);
        }
    }
    else if(p->data>del){
        dele(p->lchild,del);
    }
    else if(p->data<del){
        dele(p->rchild,del);
    }
}
int main(){
    Bitree tree;
    tree=NULL;
    Bitree pointer;
    Btree(tree,pointer);
    int a[10],b[9],pos,del;
    in_order(tree,a);
    printf("\n");
    pos=bisearch(a);
    printf("%d\n",pos);
    scanf("%d",&del);
    dele(tree,del);
    in_order(pointer,b);
    return 0;
}