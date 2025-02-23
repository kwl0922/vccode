//P1042 [NOIP 2003 普及组] 乒乓球
#include<stdio.h>

int main(){
    char a[62525],e;
    int i=0,j,c1=0,c2=0;
    scanf("%c",&e);
    while(e!='E'){
        a[i++]=e;
        scanf(" %c",&e);
    }
    for(j=0;j<i;j++){
        if(a[j]=='W'){
            c1++;
        }else{
            c2++;
        }
        if(((c1==11||c2==11)&&(c1-c2>=2||c1-c2<=-2))||((c1>11||c2>11)&&(c1-c2==2||c1-c2==-2))){
            printf("%d:%d\n",c1,c2);
            c1=0;c2=0;
        }
    }
    printf("%d:%d\n\n",c1,c2);
    c1=0;c2=0;
    for(j=0;j<i;j++){
        if(a[j]=='W'){
            c1++;
        }else{
            c2++;
        }
        if(((c1==21||c2==21)&&(c1-c2>=2||c1-c2<=-2))||((c1>21||c2>21)&&(c1-c2==2||c1-c2==-2))){
            printf("%d:%d\n",c1,c2);
            c1=0;c2=0;
        }
    }
    printf("%d:%d",c1,c2);
    return 0;
}