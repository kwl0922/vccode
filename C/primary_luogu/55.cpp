//P1614 爱与愁的心痛
#include<stdio.h>
int main(){
    int n,m,i,j,count1=0,count2=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-m+1;i++){
        if(i==0){
            for(j=0;j<m;j++){
                count1+=a[j];
            }
        }else{
        for(j=i;j<m+i;j++){
            count2+=a[j];
        }
        if(count2<count1){
            count1=count2;
        }         
        }
        count2=0;
    }
    printf("%d",count1);
    return 0;
}