//P2433 【深基1-2】小学数学 N 合一
#include<stdio.h>
#include<math.h>
int main() {
    int T;
    scanf("%d",&T);
    if (T == 1) {
    printf("I love Luogu!");
    } else if (T == 2) {
    printf("%d %d",4+2,10-4-2);
    } else if (T == 3) {
    printf("%d\n",14/4);
    printf("%d\n",14-14%4);
    printf("%d",14%4);
    } else if (T == 4) {
    printf("%.3f",(float)500/3);
    } else if (T == 5) {
    printf("%d",(260+220)/(12+20));
    } else if (T == 6) {
    printf("%.4f",(float)sqrt(6*6+9*9));
    } else if (T == 7) {
    printf("%d\n",100+10);
    printf("%d\n",100+10-20);
    printf("%d\n",0);
    } else if (T == 8) {
    float r=5,pai=3.141593;
    printf("%.4f\n",2*pai*r);
    printf("%.4f\n",pai*r*r);
    printf("%.3f",1.0*4/3*pai*r*r*r);
    } else if (T == 9) {
    printf("%d",(((1+1)*2+1)*2+1)*2);
    } else if (T == 10) {
    printf("%d",9);
    } else if (T == 11) {
    printf("%.4lf",1.0*100/3);
    } else if (T == 12) {
    char alphabet[30];
    int i=0;
    for(;i<26;i++){
        alphabet[i] ='A'+ i;
    }
    i=0;
    while(alphabet[i]!='M'){
    i++;}
    printf("%d\n",i+1);
    printf("%c",alphabet[17]);
    } else if (T == 13) {
    float pi=3.141593;
    printf("%d",(int)(pow(4/3*pi*(4*4*4+10*10*10),1.0*1/3)));
    } else if (T == 14) {
    int count=0;
    while((110-count)*(10+count)!=3500){
        count++;
    }
    count++;
    while((110-count)*(10+count)!=3500){
        count++;
    }
    printf("%d",110-count);
    }
    return 0;
}