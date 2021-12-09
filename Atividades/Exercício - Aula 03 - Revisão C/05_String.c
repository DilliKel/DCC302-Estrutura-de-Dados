/* Le 5 strings: ----------------------------*/
#include <stdio.h>
#include <string.h>
#define TAM 15
main()
{
char str1[TAM], str2[TAM], str3[TAM], str4[TAM], str5[TAM]; 
char str[TAM*5];
int matriz[5][1];
int *ponteiro;
int aux;

for (int i = 0; i < 5; i++){ //Aqui você digita os números
		for (int j = 0; j < 2; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

    for (int i = 0; i < 5; i++){ //Aqui ele escreve as strings dentro da matriz
		printf("( ");
		for (int j = 0; j < 2; j++){
			ponteiro = &matriz[i][j];
			printf("%d ", *ponteiro);
		}
		printf(")\n");
	}


/* Zera (inicializa) a string str, colocando um '\0' logo na
   primeira posicao.. Se nao fizermos isto, poderiamos ter um erro nela que atrapalharia o resultado  
str[0] = '\0';


strcat(str, str1);
strcat(str, str2);
strcat(str, str3);
strcat(str, str4);
strcat(str, str5);


printf("\n\n Resultado: %s\n",str); 
}*/