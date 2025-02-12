//P1200 [USACO1.1] 你的飞碟在这儿 Your Ride Is Here
#include<stdio.h>
#include<string.h>

int alphabet(char e){
    if(e=='A'){
        return 1;
    }else if(e=='B'){
        return 2;
    }else if(e=='C'){
        return 3;
    }else if(e=='D'){
        return 4;
    }else if(e=='E'){
        return 5;
    }else if(e=='F'){
        return 6;
    }else if(e=='G'){
        return 7;
    }else if(e=='H'){
        return 8;
    }else if(e=='I'){
        return 9;
    }else if(e=='J'){
        return 10;
    }else if(e=='K'){
        return 11;
    }else if(e=='L'){
        return 12;
    }else if(e=='M'){
        return 13;
    }else if(e=='N'){
        return 14;
    }else if(e=='O'){
        return 15;
    }else if(e=='P'){
        return 16;
    }else if(e=='Q'){
        return 17;
    }else if(e=='R'){
        return 18;
    }else if(e=='S'){
        return 19;
    }else if(e=='T'){
        return 20;
    }else if(e=='U'){
        return 21;
    }else if(e=='V'){
        return 22;
    }else if(e=='W'){
        return 23;
    }else if(e=='X'){
        return 24;
    }else if(e=='Y'){
        return 25;
    }else if(e=='Z'){
        return 26;
    }
    return 0;
}
int multiple(char *e,int len){
    int i;
    double result=1;
    for(i=0;i<len;i++){
    	if(alphabet(e[i])!=0){
    		result*=1.0*alphabet(e[i]);
		}
    }
    return (int)result%47;
}
int main(){
    char a[10],b[10];
    int len_a,len_b,m,n;
    fgets(a,10,stdin);
    fgets(b,10,stdin);
    len_a=strlen(a);
    len_b=strlen(b);
    if(multiple(a,len_a)==multiple(b,len_b)){
        printf("GO");
    }else{
        printf("STAY");
    }
    return 0;
}