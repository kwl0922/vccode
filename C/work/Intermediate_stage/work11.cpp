#include<stdio.h>
//a的中位数是8，b的中位数是15，求a,b合并的中位数
void search(int low1,int low2,int high1,int high2,int *a,int *b){
    int mid1,mid2;
    while(low1+1!=high1){
    mid1=(low1+high1)/2;
    mid2=(low2+high2)/2;
    if(a[mid1]==b[mid2]){
        printf("%d",a[mid1]);
        break;
    }
    else if(a[mid1]<b[mid2]){
        low1=mid1;
        high2=mid2;
        mid1=(low1+high1)/2;
        mid2=(low2+high2)/2;
        if(low1+1==high1){
            if(a[high1]==b[low2]){
                printf("%d",a[high1]);
            }
            else if(a[high1]>b[low2]){
                printf("%d",b[low2]);
            }
            else{
                printf("%d",a[high1]);
            }
        }
    }
    else if(a[mid1]>b[mid2]){
        high1=mid1;
        low2=mid2;
        mid1=(low1+high1)/2;
        mid2=(low2+high2)/2;
        if(low1+1==high1){
            if(a[low1]==b[high2]){
                printf("%d",a[low1]);
            }
            else if(a[low1]>b[high2]){
                printf("%d",b[high2]);
            }
            else{
                printf("%d",a[low1]);
            }
        }
    }
    }
}
int main(){
    int a[]={2,4,6,8,20};
    int b[]={11,13,15,17,19};
    int low1=0,low2=0,high1=sizeof(a)/4-1,high2=sizeof(b)/4-1;
    search(low1,low2,high1,high2,a,b);
    return 0;
}