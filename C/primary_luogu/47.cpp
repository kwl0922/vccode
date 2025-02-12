//P5728 【深基5.例5】旗鼓相当的对手
#include<stdio.h>
int main(){
    int n,i,j,total,count,result=0,k,m,q=3,c=0,flag=0;
    scanf("%d",&n);
    total=3*n;
    int a[total];
    for(i=0;i<total;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            k=i*3;
            m=j*3;
            while(q!=0){
            count=a[k++]-a[m++];
            if(count>5||count<-5){
                flag=1;
                break;
            }
            result+=count;
            q--;
            }
            q=3;
            if(flag==1){
                flag=0;
            }
            else if(flag==0){
                if(result<=10&&result>=-10){
                    c++;
                }
            }
            result=0;
        }
    }
    printf("%d",c);
    return 0;
}