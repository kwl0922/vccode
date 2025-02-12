//P1765 手机
#include<stdio.h>
#include<string.h>

int main(){
    char a[200];
    int i,j,count=0;
    gets(a);
    i=strlen(a);
    for(j=0;j<i;j++){
        if(a[j]=='a'||a[j]=='d'||a[j]=='g'||a[j]=='j'||a[j]=='m'||a[j]=='p'||a[j]=='t'||a[j]=='w'||a[j]==' '){
            count++;
        }
        else if(a[j]=='b'||a[j]=='e'||a[j]=='h'||a[j]=='k'||a[j]=='n'||a[j]=='q'||a[j]=='u'||a[j]=='x'){
            count+=2;
        }
        else if(a[j]=='c'||a[j]=='f'||a[j]=='i'||a[j]=='l'||a[j]=='o'||a[j]=='r'||a[j]=='v'||a[j]=='y'){
            count+=3;
        }
        else if(a[j]=='s'||a[j]=='z'){
            count+=4;
        }
    }
    printf("%d",count);
    return 0;
}