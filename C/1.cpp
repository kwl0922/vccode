#define MaxSize 255;
#define Elemtype char;
typedef struct String1{
    Elemtype data[MaxSize];
    int len;
}S1;
typedef struct String2{
    Elemtype *data;
    int len;
}S2;
S2 S.data=(Elemtype*)malloc(sizeof(Elemtype)*len);
typedef struct String{
    Elemtype data;
    struct String *next;
}S;