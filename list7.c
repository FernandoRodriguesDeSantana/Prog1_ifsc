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

