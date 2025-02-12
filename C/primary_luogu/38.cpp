//P1217 [USACO1.5] 回文质数 Prime Palindromes
#include<stdio.h>
#include<math.h>

int main(){
    int flag=0,a,b,i,j,c=0;
    scanf("%d%d",&a,&b);
    if(a%2==0){
        a+=1;
    }
    for(i=a;i<=b;i+=2){
        if((i>1000&&i<10000)||(i>20000&&i<30000)||(i>40000&&i<70000)||(i>80000&&i<90000)||(i>100000&&i<1000000)||(i>2000000&&i<3000000)||(i>4000000&&i<7000000)||(i>8000000&&i<9000000)){
            continue;
        }
        for(j=3;j<=sqrt(i);j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
            flag=0;
            continue;
        }
        j=i;
        while(j/10>=0){
            c*=10;
            c+=j%10;
            j/=10;
            if(j==0){
                break;
            }
        }
        if(c==i){
            c=0;
            printf("%d\n",i);
        }else{
            c=0;
        }
    }
    return 0;
}