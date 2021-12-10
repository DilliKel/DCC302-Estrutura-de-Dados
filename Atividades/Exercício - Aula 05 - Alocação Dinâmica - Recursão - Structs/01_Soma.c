#include <stdio.h>
#include<math.h>
int soma(int n1,int n2){
    int nS = abs(n2-n1); int sum = n1;

    if (nS == 0) return sum;
    else if (nS==1) return (sum+sum+1);
    else if (nS>1) sum = soma(n1+1,n2)+sum;
    return sum;
}

void main(){
    printf("%d",soma(3,7));
}