//P3741 小果的键盘
#include<stdio.h>

int main(){
    int n,i,count=0,flag=0;
    char e;
    scanf("%d",&n);
    if(n==1){
        scanf("\n%s",&e);
        printf("0");
        return 0;
    }
    char a[n];
    scanf("\n%s",a);
    for(i=0;i<n-1;i++){
        if(a[i]=='K'){
            continue;
        }else{
            if(a[i+1]=='K'){
                count++;
                a[i]='a';
                a[i+1]='b';
                i++;
            }else{
                continue;
            }
        }
    }
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
            break;
        }
    }
    printf("%d",count);
    return 0;
}