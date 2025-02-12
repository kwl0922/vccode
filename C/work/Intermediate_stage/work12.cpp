#include<stdio.h>
#include<stdlib.h>
//读取10个整型数据12 63 58 95 41 35 65  0 38 44，
//然后通过冒泡排序，快速排序，插入排序，分别对该组数据进行排序，
//输出3次有序结果，每个数的输出占3个空格
typedef struct array{
    int *elem;
    int len;
}Array;
void print(Array E){
    for(int i=0;i<E.len;i++){
        printf("%3d",E.elem[i]);
    }
    printf("\n");
}
void init(Array &A){
    int i;
    A.len=10;
    A.elem=(int*)malloc(sizeof(int)*A.len);
    for(i=0;i<A.len;i++){
        scanf("%d",&A.elem[i]);
    }
}
void Bubble_sort(Array &A){
    int n=A.len-1,j=n,e;
    while(n){
        for(;j>=A.len-n;j--){
            if(A.elem[j]<A.elem[j-1]){
            e=A.elem[j-1];
            A.elem[j-1]=A.elem[j];
            A.elem[j]=e;
            }
        }
        j=A.len-1;
        n--;
    }
    print(A);
}
int partition(Array &A,int low,int high){
    int e=A.elem[low];
    while(low<high){
        if(A.elem[high]>=e){
            while(A.elem[high]>=e&&low<high){
                high--;
            }
        }
        A.elem[low]=A.elem[high];
        if(A.elem[low]<=e){
            while(A.elem[low]<=e&&low<high){
                low++;
            }
            
        }
        A.elem[high]=A.elem[low];
    }
    A.elem[low]=e;
    return low;
}
void Quick_sort(Array &A,int low,int high){
    if(low<high){
        int pivot=partition(A,low,high);
        Quick_sort(A,low,pivot-1);
        Quick_sort(A,pivot+1,high);
    }
}
void Insert_sort(Array &A){
    int e,i,j;
    for(i=0;i<A.len;i++){
        e=A.elem[i];
        j=i;
        while(A.elem[j]<A.elem[j-1]&&j){
            A.elem[j]=A.elem[j-1];
            A.elem[j-1]=e;
            j--;
        }
    }
    print(A);
}
int main(){
    Array A;
    init(A);
    Bubble_sort(A);
    int low=0,high=A.len-1;
    Quick_sort(A,low,high);
    print(A);
    Insert_sort(A);
    return 0;
}