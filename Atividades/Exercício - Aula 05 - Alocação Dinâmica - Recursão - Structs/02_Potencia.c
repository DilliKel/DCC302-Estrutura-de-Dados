#include <stdio.h>

int main() {
  int x, n, potencia, contador; 
  
  printf("\n\tCalculo de potencias\n");
  printf("\nDigite um numero inteiro: ");
  scanf("%d", &x);
  printf("Digite outro numero um inteiro que nao seja negativo: ");
  scanf("%d", &n);
  
  potencia = 1;
  contador = 0;
  
  while (contador != n) {
    potencia = potencia * x;
    contador = contador + 1;
  }
  
  printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
  return 0;
}