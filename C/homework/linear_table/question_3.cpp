#include"head.h"

void find(L &L,int e){
    int i,j;
    for(i=0;i<L.len;i++){
        if(L.elem[i]==e){
            if(i!=L.len-1){
                for(j=i+1;j<L.len;j++){
                L.elem[j-1]=L.elem[j];
                }
                i--;
            }
            L.len--;
        }
    }
    print(L);
}
int main(){
    L L;
    int e;
    init(L);
    scanf("%d",&e);
    find(L,e);
    return 0;
}