#include"head.h"

bool confine_find(L &L){
    if(L.len==0){
        return false;
    }
    int i,j,s=30,t=50;
    for(i=0;i<L.len&&L.len>0;i++){
        if(s<L.elem[i]&&L.elem[i]<t){
            if(i!=L.len-1){
                for(j=i+1;j<L.len;j++){
                L.elem[j-1]=L.elem[j];
                }
                i--;
            }
            L.len--;
        }
    }
    if(L.len!=0){
        print(L);
        return true;
    }
    else{
        return false;
    }
}
int main(){
    L L;
    init(L);
    confine_find(L);
    return 0;
}