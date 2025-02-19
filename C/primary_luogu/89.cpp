//P5741 【深基7.例10】旗鼓相当的对手 - 加强版
#include<stdio.h>

typedef struct{
    char Name[9];
    int Chinese;
    int Math;
    int English;
}Student;

int main(){
    int n,i,j;
    scanf("%d",&n);
    Student S[n];
    for(i=0;i<n;i++){
        scanf(" %s%d%d%d",S[i].Name,&S[i].Chinese,&S[i].Math,&S[i].English);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(S[i].Chinese-S[j].Chinese>5||S[i].Chinese-S[j].Chinese<-5||S[i].Math-S[j].Math>5||S[i].Math-S[j].Math<-5||+S[i].English-S[j].English>5||S[i].English-S[j].English<-5||S[i].Chinese+S[i].Math+S[i].English-S[j].Chinese-S[j].Math-S[j].English>10||S[i].Chinese+S[i].Math+S[i].English-S[j].Chinese-S[j].Math-S[j].English<-10){
                continue;
            }else{
                printf("%s %s\n",S[i].Name,S[j].Name);
            }
        }
    }
    return 0;
}