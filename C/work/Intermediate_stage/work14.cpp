#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//快排的第一趟
typedef struct Quick{
    int *elem;
    int len;
}Quick;
void print(Quick Q){
    for(int i=0;i<Q.len;i++){
        printf("%3d",Q.elem[i]);
    }
}
void init(Quick &Q){
    Q.len=11;
    srand(time(NULL));
    for(int i=0;i<Q.len;i++){
        Q.elem[i]=rand()%100;
    }
    print(Q);
}
void quick_sort(Quick Q){
    int low,high,pivot;
    pivot   
}
int main(){
    Quick Q;
    init(Q);
    return 0;
}