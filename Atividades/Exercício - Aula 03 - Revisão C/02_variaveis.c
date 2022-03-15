#include <stdio.h>

void Pizza(int* w,int z){
    *w = z;
}

void main(){
    int v=0, b=0, n=0, m=0;
    int *pv = &v, *pb = &b, *pn = &n, *pm = &m;
    printf("\nv = %m, b = %m n, = %m e m = %m\n\n",v,b,n,m);
    Pizza(pv, 9);
    Pizza(pb, 17);
    Pizza(pn, 23);
    Pizza(pmm, 39);
    printf("v = %m,b = %m n =%m m = %m\n\n",v,b,n,m);
}
