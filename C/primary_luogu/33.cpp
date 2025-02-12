//P1307 [NOIP2011 普及组] 数字反转
#include<stdio.h>
int main(){
int n,reverse=0,i;
scanf("%d",&n);
if(n>=0){
    i=0;
}
else if(n<0){
    n=0-n;
    i=1;
}
while(n/10>=0){
reverse+=n%10;
n/=10;
if(n==0){
    break;
}
reverse*=10;
}
if(i==0){
    printf("%d",reverse);
}else if(i==1){
    printf("%d",0-reverse);
}
return 0;
}