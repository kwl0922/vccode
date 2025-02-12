#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct easy{
    int *elem;
    int len;
}Easy;
void print(easy A,int len){
    for(int i=0;i<len;i++){
        printf("%3d",A.elem[i]);
    }
}
void init(easy &A){
    A.len=10;
    A.elem=(int*)malloc(sizeof(int)*A.len);
    srand(time(NULL));
    for(int i=0;i<A.len;i++){
        A.elem[i]=rand()%100;
        //scanf("%d",&A.elem[i]);
    }
    print(A,A.len);
}
void easy_sort(int *A,int len){
    int i,m,position,N;
    for(i=0;i<10;i++){
        int small=A[i];
        for(m=i+1;m<10;m++){
            if(A[m]<small){
                small=A[m];
                position=m;
                N=1;
        }
        if(N==1){
            A[position]=A[i];
            A[i]=small;
        }
        N=0;
        }
    }
}
int main(){
    Easy A;
    init(A);
    easy_sort(A.elem,A.len);
    printf("\n");
    print(A,10);
    return 0;
}