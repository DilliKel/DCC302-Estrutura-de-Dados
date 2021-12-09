#include <stdio.h>
void main(){

	int matriz[5][2];  
	int *ponteiro;


	for (int i = 0; i < 5; i++){ //Aqui você digita os números
		for (int j = 0; j < 2; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("\n Mostrando na Matriz\n");

	for (int i = 0; i < 5; i++){ //Aqui ele escreve os números dentro da matriz
		printf("( ");
		for (int j = 0; j < 2; j++){
			ponteiro = &matriz[i][j];
			printf("%d ", *ponteiro);
		}
		printf(")\n");
	}
	printf("\n");
}