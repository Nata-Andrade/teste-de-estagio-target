#include <stdio.h>

int main(void){

	int input, a = 0, b = 1; //Julgo desnecessário um tipo maior que 4 bytes para demosntrar a lógica do meu algorítmo
	
	printf("Insira um valor(natural): ");
	scanf("%d", &input); //Todo número na sequência de fibonacci é natural
	
	while(b < input){
		a+=b;
		b+=a;
		
		}
	
	if((b == input) || (a == input)) printf("Seu número pertence a sequência de Fibonacci\n");
	else printf("Seu número NÃO pertence a sequência de Fibonacci\n");
	
	return 0;
	}
