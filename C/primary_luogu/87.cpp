//P5461 赦免战俘
//二维数组传参
#include<stdio.h>

void recursion(int x,int y,int len,char (*a)[1024]){
    int row,column;
    len/=2;
    if(len>0){
        for(row=x;row<len+x;row++){
            for(column=y;column<len+y;column++){
                a[row][column]='0';
            }
        }
        recursion(row,column-len,len,a);
        recursion(row-len,column,len,a);
        recursion(row,column,len,a);
    }
}

int main(){
    int n,i,j,l=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        l*=2;
    }
    char a[l][1024];
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            a[i][j]='1';
        }
    }
    recursion(0,0,l,a);
    for(i=0;i<l;i++){
        for(j=0;j<l;j++){
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}