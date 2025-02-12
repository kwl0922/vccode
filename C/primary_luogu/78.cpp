//P1603 斯诺登的密码
#include<stdio.h>
#include<string.h>

int choose(char *str1){
    if(strcmp(str1,"one")==0||strcmp(str1,"a")==0||strcmp(str1,"a""n""o""t""h""e""r")==0||strcmp(str1,"f""i""r""s""t")==0){
        return 1;
    }else if(strcmp(str1,"two")==0||strcmp(str1,"both")==0||strcmp(str1,"second")==0){
        return 4;
    }else if(strcmp(str1,"three")==0||strcmp(str1,"third")==0){
        return 9;
    }else if(strcmp(str1,"four")==0){
        return 16;
    }else if(strcmp(str1,"five")==0){
        return 25;
    }else if(strcmp(str1,"six")==0){
        return 36;
    }else if(strcmp(str1,"seven")==0){
        return 49;
    }else if(strcmp(str1,"eight")==0){
        return 64;
    }else if(strcmp(str1,"nine")==0){
        return 81;
    }else if(strcmp(str1,"ten")==0){
        return -1;
    }else if(strcmp(str1,"eleven")==0){
        return 21;
    }else if(strcmp(str1,"twelve")==0){
        return 44;
    }else if(strcmp(str1,"thirteen")==0){
        return 69;
    }else if(strcmp(str1,"fourteen")==0){
        return 96;
    }else if(strcmp(str1,"fifteen")==0){
        return 25;
    }else if(strcmp(str1,"sixteen")==0){
        return (16*16)%100;
    }else if(strcmp(str1,"seventeen")==0){
        return (17*17)%100;
    }else if(strcmp(str1,"eighteen")==0){
        return (18*18)%100;
    }else if(strcmp(str1,"nineteen")==0){
        return (19*19)%100;
    }else if(strcmp(str1,"twenty")==0){
        return -1;
    }
    return -1;
}

int main(){
    char a[100],b[20];
    int i,j=0,k=0,m=0,c[6];
    double min;
    fgets(a,100,stdin);
    for(i=0;i<6;i++){
        while(a[j]!=' '){
            if(a[j]=='.'){
                break;
            }
            b[k++]=a[j++];
        }
        b[k]='\0';
        k=0;
        j++;
        if(choose(b)!=-1){
            c[m++]=choose(b);            
        }
    }
    if(m==0){
        printf("0");
        return 0;
    }
    for(i=1;i<m;i++){
        j=i;
        while(c[j-1]>c[j]&&j>=1){
            k=c[j-1];
            c[j-1]=c[j];
            c[j]=k;
            j--;
        }
    }
    for(i=0;i<m;i++){
        min=min*100+1.0*c[i]; 
    }
    printf("%.0lf",min);
    return 0;
}