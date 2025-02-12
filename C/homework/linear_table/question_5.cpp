#include"head.h"

void del_repeat(L &L){
    int e,i,j,k;
    for(i=0;i<L.len;i++){//遍历数组
        e=L.elem[i];
        for(j=i+1;j<L.len;j++){//遍历后续数组，找重复值
            if(j!=L.len-1){
                if(L.elem[j]==e){
                    for(k=j+1;k<L.len;k++){//删除元素后，后续元素前移
                        L.elem[k-1]=L.elem[k];
                    }
                L.len--;
                }
            }
            else if(j==L.len-1&&L.elem[j]==e){
                L.len--;
            }
        }
    }
    print(L);
}
int main(){
    L L;
    init(L);
    del_repeat(L);
    return 0;
}