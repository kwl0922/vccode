//P1205 [USACO1.2] 方块转换 Transformations
#include<stdio.h>
int main(){
    int n,i,j,flag=0;
    scanf("%d",&n);
    char e,a[n][n],b[n][n],c[n][n],d[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&e);
            a[i][j]=e;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&e);
            if(e!='\n'){
                b[i][j]=e;
            }else{
                j--;
            }
        }
    }
//90°  a->c
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[j][n-1-i]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==c[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("1");
        return 0;
    }
    flag=0;
//180°  c->a
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[j][n-1-i]=c[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==a[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("2");
        return 0;
    }
    flag=0;
//270°  a->c
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[j][n-1-i]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==c[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("3");
        return 0;
    }
    flag=0;
//c->a 原图像
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[j][n-1-i]=c[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            d[i][j]=a[i][j];
        }
    }
//反射  a->c
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][n-1-j]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==c[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("4");
        return 0;
    }
    flag=0;
//反射+90°or180°or270°
    for(i=0;i<n;i++){//90° c->a
        for(j=0;j<n;j++){
            a[j][n-1-i]=c[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==a[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("5");
        return 0;
    }
    flag=0;

    for(i=0;i<n;i++){//180° a->c
        for(j=0;j<n;j++){
            c[j][n-1-i]=a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==c[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("5");
        return 0;
    }
    flag=0;

    for(i=0;i<n;i++){//270° c->a
        for(j=0;j<n;j++){
            a[j][n-1-i]=c[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==a[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("5");
        return 0;
    }
    flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[i][j]==d[i][j]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        printf("6");
        return 0;
    }
    flag=0;
    printf("7");
    return 0;
}