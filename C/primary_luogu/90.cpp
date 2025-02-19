//P5742 【深基7.例11】评等级
#include<stdio.h>

typedef struct Score{
    short num;
    short a;
    short b;

}S;

int main(){
    short n,i;
    scanf("%d",&n);
    S student[n];
    for(i=0;i<n;i++){
        scanf("%d%d%d",&student[i].num,&student[i].a,&student[i].b);
    }
    for(i=0;i<n;i++){
        if(student[i].a+student[i].b>140&&student[i].a*7+student[i].b*3>=800){
            printf("Excellent\n");
        }else{
            printf("Not excellent\n");
        }
    }
    return 0;
}