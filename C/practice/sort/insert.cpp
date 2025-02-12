#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Ins{
    int *elem;
    int len;
}Insert;
void print(Insert E){
    int i=0;
    for(i=0;i<E.len;i++){
        printf("%-3d",E.elem[i]);
    }
}
void init(Insert &A,Insert &B){
    int i=0;
    A.len=10;
    B.len=10;
    A.elem=(int*)malloc(A.len*sizeof(int));
    B.elem=(int*)malloc(B.len*sizeof(int));
    srand(time(NULL));
    for(i=0;i<A.len;i++){
        A.elem[i]=rand()%100;
    }
    print(A);
}
void ins_sort(Insert &A,Insert &B){
    int n=A.len-1;
    int i=1,j,e;
    B.elem[0]=A.elem[0];
    while(n){
        if(A.elem[i]>=B.elem[i-1]){
            B.elem[i]=A.elem[i];
        }
        else if(A.elem[i]<B.elem[i-1]){
            j=i;
            B.elem[j]=B.elem[j-1];
            B.elem[j-1]=A.elem[j];
            j--;
            while(B.elem[j]<B.elem[j-1]&&j){
                e=B.elem[j];
                B.elem[j]=B.elem[j-1];
                B.elem[j-1]=e;
                j--;
            }
        }
        i++;
        n--;
    }
    printf("\n");
    print(B);
}

int main(){
    Insert A,B;
    init(A,B);
    ins_sort(A,B);
    free(A.elem);
    free(B.elem);
    return 0;
}