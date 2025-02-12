#include<stdio.h>
#include<stdlib.h>

char get(char* &a)
{
    a=(char*)malloc(20);
    gets(a);
}

int main()
{
    char* p=NULL;
    get(p);
    puts(p);
    free(p);
    p=NULL;
    return 0;
}