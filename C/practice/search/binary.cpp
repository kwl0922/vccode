#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Lnode{
    int *elem;
    int len;
}L;
void print(L L){
    for(int i=0;i<L.len;i++){
        printf("%-3d",L.elem[i]);
    }
}
void init(L &L){
    L.len=10;
    int e,i=0;
    srand(time(NULL));
    L.elem=(int *)malloc(sizeof(L)*L.len);
    for(i=0;i<L.len;i++){
        e=rand()%100;
        L.elem[i]=e;
    }
    print(L);
}
int binary(L L,int key){
    int low=0,high=L.len-1;
    if(L.elem[low]==key){
        return low+1;
    }
    else if(L.elem[high]==key){
        return high+1;
    }
    else{
        while(low+1!=high){
            if(L.elem[(low+high)/2]==key){
                return (low+high)/2+1;
            }else if(L.elem[(low+high)/2]>key){
                high=(low+high)/2;
            }
            else if(L.elem[(low+high)/2]<key){
                low=(low+high)/2;
            }
        }
        return 0;
    }
}
//qsort规定如果left指向的值大于right指向的值，返回正值；小于，返回负值；等于，返回0
int compare(const void *left,const void *right){
    return *(int*)left-*(int*)right;//从小到大排序
    //return *(int*)right-*(int*)left;//从大到小排序
}
int main(){
    L L;
    int pos,key;
    printf("排序前：\n");
    init(L);
    qsort(L.elem,L.len,sizeof(int),compare);
    printf("\n排序后：\n");
    print(L);
    printf("\n请输入要查找的值：\n");
    scanf("%d",&key);
    pos=binary(L,key);
    printf("在第%d个位置！",pos);
    return 0;
}