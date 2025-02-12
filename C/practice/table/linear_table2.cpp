#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct Linear{
    int *elem;
    int len;
}L;
void init(L &L){
    L.len=10;
    L.elem=(int*)malloc(sizeof(L)*(L.len));
    srand(time(NULL));
    for(int i=0;i<L.len;i++){
        L.elem[i]=rand()%100;
    }
}
void print(L L){
    for(int i=0;i<L.len;i++){
        printf("%-3d",L.elem[i]);
    }
}
int main(){
    L L;
    init(L);
    print(L);
    return 0;
}