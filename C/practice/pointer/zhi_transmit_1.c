#include <stdio.h>
//值传递
void transmit1(char b[]){
    *b='H';
    b[1]='E';
}
void transmit2(char *c){
    *c='h';
    c[1]='e';
}
int main(){
    char a[10]="hello";
    transmit1(a);
    puts(a);
    transmit2(a);
    puts(a);
    return 0;
}