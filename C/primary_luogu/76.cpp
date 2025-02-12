//P1321 单词覆盖还原
#include<stdio.h>
#include<string.h>

int main(){
    int boy=0,girl=0,i,len;
    char a[255];
    scanf("%s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='b'){
            if(a[i+1]=='o'){
                if(a[i+2]=='y'){
                    boy++;
                    i+=2;
                }else{
                    boy++;
                    i+=1;
                }
            }else{
                boy++;
            }
        }else if(a[i]=='o'){
            if(a[i+1]=='y'){
                boy++;
                i+=1;
            }else{
                boy++;
            }
        }else if(a[i]=='y'){
            boy++;
        }else if(a[i]=='g'){
            if(a[i+1]=='i'){
                if(a[i+2]=='r'){
                    if(a[i+3]=='l'){
                        girl++;
                        i+=3;
                    }
                    else{
                        girl++;
                        i+=2;
                    }
                }else{
                    girl++;
                    i+=1;
                }
            }else{
                girl++;
            }
        }else if(a[i]=='i'){
            if(a[i+1]=='r'){
                if(a[i+2]=='l'){
                    girl++;
                    i+=2;
                }else{
                    girl++;
                    i+=1;
                }
            }else{
                girl++;
            }
        }else if(a[i]=='r'){
            if(a[i+1]=='l'){
                girl++;
                i+=1;
            }else{
                girl++;
            }
        }else if(a[i]=='l'){
            girl++;
        }
    }
    printf("%d\n%d",boy,girl);
    return 0;
}