#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void main(){
    srand(time(NULL));
    int i, j, a; 
    int n =10;
    int number[10];
    int *pnumber[10];

    for (int i = 0; i <= 10; i++){ //define os valores
        number[i] = rand() % 200;
        pnumber[i] = &number[i];
        } 
 
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j){
            if (*pnumber[i] > number[j]) 
            {
                a =  *pnumber[i];
                *pnumber[i] = number[j];
                number[j] = a;
            }
        }
    }
 
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", *pnumber[i]);
 
}