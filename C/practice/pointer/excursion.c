#include <stdio.h>
//偏移
#define N 5
int main(){
    int i,a[N]={1,2,3,4,5};
    int *p;
    p=a;
    //将数组a的起始地址赋给指针变量p
    // printf("0x%x    0x%x\n",a,p+1);//输出a和p+1储存的地址
    // printf("%d           %d",*p,*(p+1));//输出指针所指的值
    printf("正序：");
    for(i=0;i<N;i++){
        printf("%-3d",*(p+i));
    }
    p=&a[4];
    printf("\n逆序：");
    for(i=0;i<N;i++){
        printf("%-3d",*(p-i));
    }
    return 0;
}