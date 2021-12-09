#include <stdio.h>

void Biscoito(int* x,int y){
    *x = y;
}

void main(){
    int a=0, b=0, c=0, d=0;
    int *pa = &a, *pb = &b, *pc = &c, *pd = &d;
    printf("\na = %d, b = %d c, = %d e d = %d\n\n",a,b,c,d);
    Biscoito(pa, 7);
    Biscoito(pb, 13);
    Biscoito(pc, 27);
    Biscoito(pd, 37);
    printf("a = %d,b = %d c =%d d = %d\n\n",a,b,c,d);
}