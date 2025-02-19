//P5740 【深基7.例9】最厉害的学生
#include<stdio.h>

typedef struct{
    char Name[9];
    int Chinese;
    int Math;
    int English;
}Student;

int main(){
    int n,i,max_score=0,max_num=0;
    scanf("%d",&n);
    Student S[n];
    for(i=0;i<n;i++){
        scanf(" %s%d%d%d",S[i].Name,&S[i].Chinese,&S[i].Math,&S[i].English);
    }
    for(i=0;i<n;i++){
        if(max_score<S[i].Chinese+S[i].Math+S[i].English){
            max_score=S[i].Chinese+S[i].Math+S[i].English;
            max_num=i;
        }
    }
    printf("%s %d %d %d",S[max_num].Name,S[max_num].Chinese,S[max_num].Math,S[max_num].English);
    return 0;
}