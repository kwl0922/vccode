//P1563 [NOIP 2016 提高组] 玩具谜题
#include<stdio.h>

typedef struct{
    int position;
    char vocation[10];
}T;

int main(){
    int n,m,i,pos=0;
    scanf("%d%d",&n,&m);
    int a[2*m];
    T toy[n];
    for(i=0;i<n;i++){
        scanf("%d %s",&toy[i].position,toy[i].vocation);
    }
    for(i=0;i<2*m;i+=2){
        scanf("%d%d",&a[i],&a[i+1]);
    }
    for(i=0;i<2*m;i+=2){
        if((a[i]==0&&toy[pos].position==0)||(a[i]==1&&toy[pos].position==1)){
            if(pos-a[i+1]>=0){
               pos=(pos-a[i+1])%n; 
            }else{
                int e=pos-a[i+1],j=1;
                while(e<0){
                    e+=j*n;
                    j++;
                }
                pos=e;
            }
        }else if((a[i]==0&&toy[pos].position==1)||(a[i]==1&&toy[pos].position==0)){
            pos=(pos+a[i+1])%n;
        }
    }
    printf("%s",toy[pos].vocation);
    return 0;
}