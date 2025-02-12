#include<stdio.h>
#include<stdlib.h>
//堆排序
typedef struct heap{
    int *elem;
    int len;
}Heap;
void print(Heap H){
    for(int i=0;i<H.len;i++){
        printf("%3d",H.elem[i]);
    }
    printf("\n");
}
void init(Heap &H){
    H.len=10;
    H.elem=(int*)malloc(sizeof(int)*H.len);
    for(int i=0;i<H.len;i++){
        scanf("%d",&H.elem[i]);
    }
}
void swap(int &a,int &b){
    int e;
    e=a;
    a=b;
    b=e;
}
void heap(Heap &H,int len){
    int n=len-1,j,dad,son;
    for(j=n/2;j>=0;j--){//从最后一个父结点开始，遍历所有父结点
        dad=j;
        son=2*dad+1;//左子树
        while(son<=len-1){
            son=2*dad+1;
            if(H.elem[son]<H.elem[son+1]&&son<len-1){//找到最大的孩子结点
                son++;
            }
            if(H.elem[son]>H.elem[dad]&&son<=len-1){//将父结点与比父结点大的孩子进行交换
                swap(H.elem[son],H.elem[dad]);
                dad=son;//每次调整完以后，将son变成新的dad，继续向下调整
            }
            else{
                break;
            }
            if(son>len-1){
                break;
            }
        }
    }
    swap(H.elem[0],H.elem[n]);
}
int main(){
    Heap H;
    init(H);
    heap(H,H.len);//第一次调整为大根堆
    print(H);
    for(int n=H.len-1;n>2;n--){//将后续元素依次调整为大根堆
        heap(H,n);
        print(H);
    }
    return 0;
}