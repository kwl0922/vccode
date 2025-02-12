//P5717 【深基3.习8】三角形分类
#include<stdio.h>
int main(){
    int a[3],m,i,j;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=1;i<3;i++){
        for(j=1;j<3;j++){
            if(a[j-1]>a[j]){
                m=a[j-1];
                a[j-1]=a[j];
                a[j]=m;
            }
        }
    }
    if(a[0]+a[1]<=a[2]){
        printf("Not triangle");
    }else{
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
            printf("Right triangle\n");
        }
        if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]){
            printf("Acute triangle\n");
        }
        if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]){
            printf("Obtuse triangle\n");
        }
        if(a[0]==a[1]||a[1]==a[2]){
            printf("Isosceles triangle\n");
        }
        if(a[0]==a[1]&&a[1]==a[2]){
            printf("Equilateral triangle");
        }
    }
    return 0;
}