#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quick_sort(int *a,int i,int j){
    int e,n=j;
    while(i<j){
        if(a[i]<a[0]){
            while(a[i]<=a[0]){
                i++;
            }
        }
        else if(a[i]>a[0]){
            while(a[j]>a[0]&&j>i){
                j--;
            }
            e=a[j];
            a[j]=a[i];
            a[i]=e;
            }
        }
    j--;
    e=a[0];
    a[0]=a[j];
    a[j]=e;
}
void recursion(){
    
}
int main(){
    int m,a[30],i=1,j=30-1;
    srand(time(NULL));
    for(m=0;m<30;m++){
        a[m]=rand()%100;
    }
    for(m=0;m<30;m++){
        printf("%3d",a[m]);
    }
    quick_sort(a,i,j);
    printf("\n");
    for(m=0;m<30;m++){
        printf("%3d",a[m]);
    }
    return 0;
}