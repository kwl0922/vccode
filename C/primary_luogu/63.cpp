//P1319 压缩技术
#include<stdio.h>
int main(){
    int n,i,j,k,e,flag=0;
    scanf("%d",&n);
    char a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]='2';
        }
    }
    i=0;j=0;
    while(a[n-1][n-1]=='2'){
        scanf("%d",&e);
        if(flag==0){
            for(k=0;k<e;k++){
                a[i][j++]='0';
                if(j/n==1){
                    i++;
                    j=0;
                }
            }
            flag=1;
        }else if(flag==1){
            for(k=0;k<e;k++){
                a[i][j++]='1';
                if(j/n==1){
                    i++;
                    j=0;
                }
            }
            flag=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}