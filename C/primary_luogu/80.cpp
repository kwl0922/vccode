//P1597 语句解析
#include<stdio.h>
#include<string.h>

int main(){
    char array[255];
    int a=0,b=0,c=0,len,i;
    fgets(array,255,stdin);
    len=strlen(array);
    for(i=0;i<len;i+=5){
        if(array[i]=='a'){
            if(array[i+3]=='a'){
                a=a;
            }else if(array[i+3]=='b'){
                a=b;
            }else if(array[i+3]=='c'){
                a=c;
            }else{
                a=array[i+3]-'0';
            }
        }else if(array[i]=='b'){
            if(array[i+3]=='a'){
                b=a;
            }else if(array[i+3]=='b'){
                b=b;
            }else if(array[i+3]=='c'){
                b=c;
            }else{
                b=array[i+3]-'0';
            }
        }else if(array[i]=='c'){
            if(array[i+3]=='a'){
                c=a;
            }else if(array[i+3]=='b'){
                c=b;
            }else if(array[i+3]=='c'){
                c=c;
            }else{
                c=array[i+3]-'0';
            }
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}