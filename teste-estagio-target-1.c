//Este é o código para um programa que imprime a soma de uma progressão aritmética, de razão 1, de 1 a 13
#include <stdio.h>

int main(void){

	int INDICE = 13, SOMA = 0, K = 0;

	while ( K < INDICE){

			K = K + 1;

			SOMA = SOMA + K;

		}

	printf("%d", SOMA);
	}
