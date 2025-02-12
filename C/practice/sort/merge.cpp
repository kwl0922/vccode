#include<stdio.h>
#include<stdlib.h>
//归并排序
typedef struct Merge{
    int *elem;
    int len;
}Merge;
void print(Merge A){
    for(int i=0;i<A.len;i++){
        printf("%3d",A.elem[i]);
    }
    printf("\n");
}
void init(Merge &A){
    A.len=10;
    A.elem=(int*)malloc(sizeof(int)*A.len);
    for(int i=0;i<A.len;i++){
        scanf("%d",&A.elem[i]);
    }
    //print(A);
}
void merge(int *A,int low,int mid,int high){
    int i,j,k;
    static int B[10];
    for(i=low;i<=high;i++){
        B[i]=A[i];//先将A的元素传入B中
    }
    k=low;
    for(i=low,j=mid+1;i<=mid&&j<=high;k++){//每次从两边找到最小的元素插入A中
        if(B[i]<=B[j]){
            A[k]=B[i++];
        }
        else if(B[i]>B[j]){
            A[k]=B[j++];
        }
    }
    while(i<=mid){//将左边剩余元素插入A中
        A[k++]=B[i++];
    }
    while(j<=high){//将右边剩余元素插入A中
        A[k++]=B[j++];
    }
}
void merge_sort(int *A,int low,int high){
    int mid=(low+high)/2;
    if(low<high){
        merge_sort(A,low,mid);
        merge_sort(A,mid+1,high);
        merge(A,low,mid,high);
    }
}
int main(){
    Merge A;
    init(A);
    int low=0,high=A.len-1;
    merge_sort(A.elem,low,high);
    print(A);
    return 0;
}