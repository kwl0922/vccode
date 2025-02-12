#include <stdio.h>
//顺序表
#define MaxSize 50
typedef int ElemType;
typedef struct{
    ElemType data[MaxSize];
    int len;
}Sqlist;

void circle_read(int len,Sqlist &L){//循环读取
    for(int i=0;i<len;i++){
        scanf("%d",&L.data[i]);
        L.len++;
    }
}
void circle_print(Sqlist L){//循环输出
    for(int i=0;i<L.len;i++){
        printf("%-d ",L.data[i]);
    }
}
bool init(int &len,Sqlist &L,int &position,int &e,int &j){//初始化
    printf("请输入要插入的元素个数：\n");
    scanf("%d",&len);
    printf("请输入要插入的元素：\n");
    circle_read(len,L);
    printf("当前表内有%d个元素，顺序为：\n",len);
    circle_print(L);
    printf("\n是否要插入元素：(1.是 0.否)\n");
    scanf("%d",&j);
    //j用于短路运算，判断要插入位置是否合法
    if(1==j){
        printf("请输入要插入的元素位置：\n");
        scanf("%d",&position);
        if(1<=position&&position<=L.len+1){
        j=1;
        printf("请输入要插入的元素：\n");
        scanf("%d",&e);
        return true;
        }
        else{
        j=0;
        printf("插入位置非法！");
        return false;
        }
    }
    else{
        return true;
    }
}
bool insert(int position,Sqlist &L,int e){//尾插法
    for(int i=L.len;position<=L.len,i>=position;i--){
        L.data[i]=L.data[i-1];
    }
    L.data[position-1]=e;
    L.len++;
    printf("插入后表中有%d个元素，顺序为：\n",L.len);
    circle_print(L);
    return true;
}
bool del(Sqlist &L,int &j){
    int i;
    printf("请输入要删除的元素位置：\n");
    scanf("%d",&i);
    if(1<=i&&i<=L.len){
        j=1;
        for(;i<L.len;i++){
            L.data[i-1]=L.data[i];
        }
        L.len--;
        printf("删除后表中有%d个元素，顺序为：\n",L.len);
        circle_print(L);
        return true;
    }
    else{
        j=0;
        printf("删除位置非法！");
        return false;
    }
}
bool search(Sqlist L){
    int i;
    printf("请输入要查询的元素值：\n");
    scanf("%d",&i);
    for(int j=0;j<L.len;j++){
        if(i==L.data[j]){
            j++;
            printf("所查元素在第%d位。",j);
            return true;
            break;
        }
        else{
            continue;
        }
    }
    printf("所查元素不在表中。");
    return false;
}
int main(){
    Sqlist L;
    L.len=0;
    int j=1,len,position,e;
    j&&init(len,L,position,e,j);//短路运算，当插入位置合法时才会执行
    j&&insert(position,L,e);//短路运算，当插入位置合法时才会执行
    printf("\n是否要删除元素：(1.是 0.否)\n");
    scanf("%d",&j);
    j&&del(L,j);
    printf("\n是否要查询元素：(1.是 0.否)\n");
    scanf("%d",&j);
    j&&search(L);
    return 0;
}