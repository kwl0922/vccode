#include<stdio.h>
#include<stdlib.h>//malloc使用的头文件

void string(){//动态申请字符串空间
    int size;//动态分配空间的大小
    char *p;
    scanf("%d",&size);
    fflush(stdin);//清空输入缓冲区
    //malloc返回的是无类型指针void*，因此要进行强制转换
    p=(char*)malloc(size);
    //假如要存入的是字符串hello，5个字符，
    //但size要等于6，剩下一个位置留给'\0'，也就是结束符
    gets(p);
    puts(p);
    free(p);//用完一定要释放
}

void integer(){//动态申请数组空间
    int size,i=0;//动态分配空间的大小
    int *p;
    scanf("%d",&size);
    fflush(stdin);//清空输入缓冲区
    //malloc返回的是无类型指针void*，因此要进行强制转换
    p=(int*)malloc(size);
    while(size){
        scanf("%d",p+i);
        size--;
        i++;
    }
    for(size=0;size<i;size++){
        printf("%d",*(p+size));
    }
    free(p);
}

int main(){
    string();
    integer();
    return 0;
}