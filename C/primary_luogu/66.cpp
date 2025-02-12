//P5729 【深基5.例7】工艺品制作
#include<stdio.h>
int main(){
    int a,b,c,n,i,j,k,p,x1,y1,z1,x2,y2,z2;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    char array[a][b][c];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++){
                array[i][j][k]='1';
            }
        }
    }
    for(p=0;p<n;p++){
        scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
        for(i=x1-1;i<x2;i++){
            for(j=y1-1;j<y2;j++){
                for(k=z1-1;k<z2;k++){
                    array[i][j][k]='0';
                }
            }
            
        }
    }
    p=0;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++){
                if(array[i][j][k]=='1'){
                    p++;
                }
            }
        }
    }
    printf("%d",p);
    return 0;
}