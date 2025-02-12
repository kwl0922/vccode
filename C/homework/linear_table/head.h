#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Linklist{
    int *elem;
    int len;
}L;
void print(L L){
    for(int i=0;i<L.len;i++){
        printf("%-3d",L.elem[i]);
    }
    printf("\n");
}
void init(L &L){
    L.len=10;
    L.elem=(int*)malloc(sizeof(int)*L.len);
    srand(time(NULL));
    for(int i=0;i<L.len;i++){
        L.elem[i]=rand()%100;
    }
    print(L);
}
void swap(int &a,int &b){
    int e;
    e=a;
    a=b;
    b=e;
}