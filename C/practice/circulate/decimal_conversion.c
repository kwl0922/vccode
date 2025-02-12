//十进制转换为其他进制
#include <stdio.h>

int main(){
    int i,j,k,l[20],m=0;
    printf("请输入想要转换的进制类型(2,4,6,8):\n");
    scanf("%d",&i);
    printf("请输入想要转换的十进制数:\n");
    scanf("%d",&j);
    printf("转换后的%d进制数为:\n",i);
    while(j!=0)
    {
        k=j%i;
        j/=i;
        l[m]=k;
        m++;
    }
    for(m!=0;m>0;m--){
        printf("%d",l[m-1]);
    }
    return 0;
}