//P1598 垂直柱状图
#include<stdio.h>
#include<string.h>

int main(){
    char in[400],e,y[100];
    int num[26],flag=0,i,max=0,k=0;
    for(i=0;i<26;i++){
        num[i]=0;
    }
    scanf("%c",&e);
    while(flag!=3){
        if(e=='\n'){
            flag++;
            if(flag==3){
                break;
            }
        }
        in[k++]=e;
        scanf("%c",&e);
    }
    fgets(y,100,stdin);
    strcat(in,y);
    k=strlen(in);
    for(i=0;i<k;i++){
        if(in[i]==' '){
            continue;
        }
        if(in[i]=='A'){
            num[0]++;
        }else if(in[i]=='B'){
            num[1]++;
        }else if(in[i]=='C'){
            num[2]++;
        }else if(in[i]=='D'){
            num[3]++;
        }else if(in[i]=='E'){
            num[4]++;
        }else if(in[i]=='F'){
            num[5]++;
        }else if(in[i]=='G'){
            num[6]++;
        }else if(in[i]=='H'){
            num[7]++;
        }else if(in[i]=='I'){
            num[8]++;
        }else if(in[i]=='J'){
            num[9]++;
        }else if(in[i]=='K'){
            num[10]++;
        }else if(in[i]=='L'){
            num[11]++;
        }else if(in[i]=='M'){
            num[12]++;
        }else if(in[i]=='N'){
            num[13]++;
        }else if(in[i]=='O'){
            num[14]++;
        }else if(in[i]=='P'){
            num[15]++;
        }else if(in[i]=='Q'){
            num[16]++;
        }else if(in[i]=='R'){
            num[17]++;
        }else if(in[i]=='S'){
            num[18]++;
        }else if(in[i]=='T'){
            num[19]++;
        }else if(in[i]=='U'){
            num[20]++;
        }else if(in[i]=='V'){
            num[21]++;
        }else if(in[i]=='W'){
            num[22]++;
        }else if(in[i]=='X'){
            num[23]++;
        }else if(in[i]=='Y'){
            num[24]++;
        }else if(in[i]=='Z'){
            num[25]++;
        }
    }
    for(i=0;i<26;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    char q[max+1][26];
    for(i=0;i<max+1;i++){
        for(k=0;k<26;k++){
            q[i][k]=' ';
        }
    }
    q[max][0]='A';q[max][1]='B';q[max][2]='C';q[max][3]='D';q[max][4]='E';
    q[max][5]='F';q[max][6]='G';q[max][7]='H';q[max][8]='I';q[max][9]='J';
    q[max][10]='K';q[max][11]='L';q[max][12]='M';q[max][13]='N';q[max][14]='O';
    q[max][15]='P';q[max][16]='Q';q[max][17]='R';q[max][18]='S';q[max][19]='T';
    q[max][20]='U';q[max][21]='V';q[max][22]='W';q[max][23]='X';q[max][24]='Y';q[max][25]='Z';
    for(k=0;k<26;k++){
        flag=max-1;
        for(i=num[k];i>0;i--,flag--){
            q[flag][k]='*';
        }
    }
    for(i=0;i<max+1;i++){
        for(k=0;k<26;k++){
            printf("%c ",q[i][k]);
        }
        printf("\n");
    }
    return 0;
}