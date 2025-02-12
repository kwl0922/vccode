#include <stdio.h>
//共40张钞票，10,5,2,1元的必须各有一张，同时总额为100
int main(){
    int x,y,z,p,c=0;
    for(x=1;x<7;x++){
        for(y=1;y<13;y++){
            for(z=1;z<35;z++){
                for(p=1;p<32;p++){
                    if(10*x+5*y+2*z+p==100&&x+y+z+p==40){
                        c++;
                        //printf("x=%d,y=%d,z=%d,p=%d\n",x,y,z,p);
                    }
                }
            }
        }
    }
    printf("%d",c);
    return 0;
}