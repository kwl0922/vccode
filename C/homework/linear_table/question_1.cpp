#include"head.h"

void sear_min(L &L,int &min){
    int i=0,pos;
    min=L.elem[i];
    for(i=1;i<L.len;i++){
        if(L.elem[i]<min){
            min=L.elem[i];
            pos=i;
        }
    }
    L.elem[pos]=L.elem[L.len-1];
    L.len--;
    printf("%d\n",min);
    print(L);
}
int main(){
    L L;
    init(L);
    int min;
    sear_min(L,min);
    return 0;
}