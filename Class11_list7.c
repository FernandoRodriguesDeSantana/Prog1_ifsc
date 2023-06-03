// 1) Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.

#include <stdio.h>

float dobro(float x){
	return 2*x;
}

int main(){
	float numero1, numero2;

	printf("Insira um numero: ");
	scanf("%f", &numero1);
	
	numero2 = dobro(numero1);

	printf("\nO dobro de %.2f vale %.2f", numero1, numero2);

	return 0;
}

// ===============================================================================================================

// 2) Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.

void verData(int dia, int mes, int ano){
	
	switch(mes){
		case 1: 
			printf("%d de janeiro de %d", dia, ano);
			break;
		case 2: 
			printf("%d de fevereiro de %d", dia, ano);
			break;
		case 3: 
			printf("%d de março de %d", dia, ano);
			break;
		case 4: 
			printf("%d de abril de %d", dia, ano);
			break;
		case 5: 
			printf("%d de maio de %d", dia, ano);
			break;
		case 6: 
			printf("%d de junho de %d", dia, ano);
			break;
		case 7: 
			printf("%d de julho de %d", dia, ano);
			break;
		case 8: 
			printf("%d de agosto de %d", dia, ano);
			break;
		case 9: 
			printf("%d de setembro de %d", dia, ano);
			break;
		case 10: 
			printf("%d de outubro de %d", dia, ano);
			break;
		case 11: 
			printf("%d de novembro de %d", dia, ano);
			break;
		case 12: 
			printf("%d de dezembro de %d", dia, ano);
			break;
		default:
			printf("Data inválida");
			break;
	}
}

int main(){
	int dia, mes, ano;
	
	printf("Entre com o dia, mes e ano: ");
	scanf("%d%d%d", &dia, &mes, &ano);

	verData(dia, mes, ano);

	return 0;
}

// ===============================================================================================================
