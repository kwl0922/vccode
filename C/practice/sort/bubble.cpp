#include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
//冒泡排序
int main(){
    int i,n=10,a[n],e,m=n-1,j=2,flag=0;
    // srand(time(NULL));
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        // a[i]=rand()%100;
    }
    while(m){
        for(;n>=j;n--){
        if(a[n-1]<a[n-2]){
            e=a[n-2];
            a[n-2]=a[n-1];
            a[n-1]=e;
            flag=1;
        }
        }
        if(flag==0){
            break;
        }
        n=10;
        j++;
        --m;
    }
    for(i=0;i<10;i++){
        printf("%3d",a[i]);
    }
    return 0;
}