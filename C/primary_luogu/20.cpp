//P4414 [COCI 2006/2007 #2] ABC
#include<stdio.h>

void match(char p,int a[]){
        if(p=='A'){
            printf("%d ",a[0]);
        }else if(p=='B')
        {
            printf("%d ",a[1]);
        }
        else if(p=='C'){
            printf("%d ",a[2]);
        }
}

int main(){
    int array[3],m,i,j;
    char a,b,c;
    scanf("%d%d%d %c%c%c",&array[0],&array[1],&array[2],&a,&b,&c);
    for(i=1;i<3;i++){
        for(j=1;j<3;j++){
            if(array[j-1]>array[j]){
                m=array[j-1];
                array[j-1]=array[j];
                array[j]=m;
            }
        }
    }
    match(a,array);
    match(b,array);
    match(c,array);
    return 0;
}