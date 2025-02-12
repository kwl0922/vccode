#include<stdio.h>
#include<stdlib.h>

typedef struct heap{
    int *elem;
    int len;
}Heap;
void print(Heap H){
    for(int i=0;i<H.len;i++){
        printf("%3d",H.elem[i]);
    }
}
void init(Heap &H,Heap &H1){
    H.len=10;
    H1.len=H.len;
    H.elem=(int*)malloc(sizeof(int)*H.len);
    H1.elem=(int*)malloc(sizeof(int)*H1.len);
    for(int i=0;i<H.len;i++){
        scanf("%d",&H.elem[i]);
        H1.elem[i]=H.elem[i];
    }
}
void swap(int &a,int &b){
    int e;
    e=a;
    a=b;
    b=e;
}
void heap(Heap H,int len){
    int n=len-1,j,dad,son;
    for(j=n/2;j>=0;j--){
        dad=j;
        son=2*dad+1;
        while(son<=len-1){
            son=2*dad+1;
            if(H.elem[son]<H.elem[son+1]&&son<len-1){
                son++;
            }
            if(H.elem[son]>H.elem[dad]&&son<len-1){
                swap(H.elem[son],H.elem[dad]);
                dad=son;
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
void easy_sort(Heap H1,int len){
    int i,m,position,N;
    for(i=0;i<len;i++){
        int small=H1.elem[i];
        for(m=i+1;m<len;m++){
            if(H1.elem[m]<small){
                small=H1.elem[m];
                position=m;
                N=1;
        }
        if(N==1){
            H1.elem[position]=H1.elem[i];
            H1.elem[i]=small;
        }
        N=0;
        }
    }
    print(H1);
}
int main(){
    Heap H,H1;
    init(H,H1);
    easy_sort(H1,H1.len);
    heap(H,H.len);//第一次调整为大根堆
    for(int n=H.len-1;n>2;n--){//将后续元素依次调整为大根堆
        heap(H,n);
    }
    printf("\n");
    print(H);
    return 0;
}