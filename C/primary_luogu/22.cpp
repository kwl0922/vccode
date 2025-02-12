//P1055 [NOIP2008 普及组] ISBN 号码
#include<stdio.h>
int main(){
    int i,j,array[10],result;
    char a[13];
    for(i=0;i<13;i++){
        scanf("%c",&a[i]);
    }
    i=0;
    for(j=0;j<13;j++){
        if(a[j]=='-'||a[j]=='X'){
            continue;
        }else{
            array[i++]=a[j]-'0';
        }
    }
    result=(array[0]*1+array[1]*2+array[2]*3+array[3]*4+array[4]*5+array[5]*6+array[6]*7+array[7]*8+array[8]*9)%11;
    if(result==array[9]||(result==10&&a[12]=='X')){
        printf("Right");
    }else if(a[12]!='X'&&result==10)
    {
        a[12]='X';
        for(i=0;i<13;i++){
            printf("%c",a[i]);
        }
    }else if(result!=array[9]&&result!=10){
        a[12]=result+'0';
        for(i=0;i<13;i++){
            printf("%c",a[i]);
        }
    }
    return 0;
}