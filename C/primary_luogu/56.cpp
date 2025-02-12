//P2911 [USACO08OCT] Bovine Bones G
#include<stdio.h>
int main(){
    int i,j,k,a,b,c,n;
    scanf("%d%d%d",&i,&j,&k);
    n=i+j+k;
    int array[n];
    for(a=0;a<n;a++){
        array[a]=0;
    }
    for(a=1;a<=i;a++){
        for(b=1;b<=j;b++){
            for(c=1;c<=k;c++){
                array[a+b+c-1]++;
            }
        }
    }
    j=0;
    for(i=2;i<n;i++){
        if(array[i]>j){
            j=array[i];
            k=i;
        }
    }
    printf("%d",k+1);
    return 0;
}