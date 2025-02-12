//P5725 【深基4.习8】求三角形
#include<stdio.h>
int main(){
int n,i,j,k=1;
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(k/10==0){
printf("0%d",k);
k++;
}else{
printf("%d",k);
k++;
}
}
printf("\n");
}
printf("\n");
k=1;
for(i=0;i<n;i++){
for(j=0;j<n-1-i;j++){
printf("  ");
}
for(j=0;j<i+1;j++){
if(k/10==0){
printf("0%d",k);
k++;
}else{
printf("%d",k);
k++;
}
}
printf("\n");
}
return 0;
}