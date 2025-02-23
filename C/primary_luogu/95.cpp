//P5744 【深基7.习9】培训
#include<stdio.h>

typedef struct{
    char name[16];
    short age;
    short score;
}student;

int main(){
    short n,i;
    scanf("%d",&n);
    student S[n];
    for(i=0;i<n;i++){
        scanf(" %s%d%d",S[i].name,&S[i].age,&S[i].score);
    }
    for(i=0;i<n;i++){
        printf("%s %d %d\n",S[i].name,S[i].age+=1,(S[i].score*12)/10>600?600:(S[i].score*12)/10);
    }
    return 0;
}