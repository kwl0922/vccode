#include"head.h"

void reverse(L &L){
    int low=0,high=L.len-1;
    while(low<high){
        swap(L.elem[low++],L.elem[high--]);
    }
    print(L);
}
int main(){
    L L;
    init(L);
    reverse(L);
    return 0;
}