#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//快速排序
typedef struct quick{
    int *elem;
    int len;
}quick;
int partition(int *A,int low,int high){
    int pivot;
    pivot=A[low];
    while(low<high){
        while(A[high]>=pivot&&low<high){
            high--;
        }
        A[low]=A[high];
        while(A[low]<=pivot&&low<high){
            low++;
        }
        A[high]=A[low];
    }
    A[low]=pivot;
    return low;
}
void quick_sort(int *A,int low,int high){
    if(low<high){
        int pivot=partition(A,low,high);
        quick_sort(A,low,pivot-1);
        quick_sort(A,pivot+1,high);
    }
}
int main(){
    quick Q;
    Q.len=10;
    int i,low=0,high=Q.len-1;
    Q.elem=(int*)malloc(sizeof(int)*Q.len);
    srand(time(NULL));
    for(i=0;i<Q.len;i++){
        Q.elem[i]=rand()%100;
    }
    for(i=0;i<Q.len;i++){
        printf("%3d",Q.elem[i]);
    }
    quick_sort(Q.elem,low,high);
    printf("\n");
    for(i=0;i<Q.len;i++){
        printf("%3d",Q.elem[i]);
    }
    return 0;
}