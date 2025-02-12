//P1161 开灯
#include<stdio.h>
int main(){
    int a,i,j,m=0,n;
    scanf("%d",&a);
    double array1[2*a];
    for(i=1;i<=a;i++){
        scanf("%lf%lf",&array1[2*i-2],&array1[2*i-1]);
        if((int)(array1[2*i-2]*array1[2*i-1])>m){
            m=(int)(array1[2*i-2]*array1[2*i-1]);
        }
    }
    char array2[m];
    for(i=0;i<m;i++){
        array2[i]='0';
    }
    for(i=1;i<=a;i++){
        for(j=1;j<=(int)array1[2*i-1];j++){
            n=(int)j*array1[2*i-2];
            if(array2[n-1]=='1'){
                array2[n-1]='0';
            }else if(array2[n-1]=='0'){
                array2[n-1]='1';
            }
        }
    }
    for(i=0;i<m;i++){
        if(array2[i]=='1'){
            break;
        }
    }
    printf("%d",i+1);
    return 0;
}