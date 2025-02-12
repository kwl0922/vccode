//P5726 【深基4.习9】打分
#include<stdio.h>
int main(){
    int n,i,min,max,min_num,max_num,result=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[0];
    min_num=0;
    for(i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
            min_num=i;
        }
    }
    max=a[0];
    max_num=0;
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
            max_num=i;
        }
    }
    if(max_num==min_num){
        printf("%d",a[0]);
    }else{
    for(i=0;i<n;i++){
        if(i==max_num||i==min_num){
            continue;
        }else{
            result+=a[i];
        }
    }
    printf("%.2lf",1.0*result/(n-2));      
    }
    return 0;
}