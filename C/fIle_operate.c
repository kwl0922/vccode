#include<stdio.h>
//文件写入
int main(){
    FILE *fp=fopen("test.lake","w");
    if (fp==NULL){
        printf("打开文件失败！\n");
        return 0;
    }
    for(int i=0;i<10000;i++){
        fputs("Hello World!",fp);
    }
    printf("写入文件成功！\n");
    fclose(fp);
    return 0;
}