/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a
modificacao.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int a = 10, option = 0, option2 = 0;
	double b = 20.3;
	char c = 'I';

	int *d;
	double *e;
	char *f;

	d = &a;
	e = &b;
	f = &c;

	printf("\n-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-\n");

	printf("\nThe 'a' value is: %d. The pointer 'd' point to the adress memory: %x. The data stored in this adress is: %d.\n", a, d, *d);
	printf("\nThe 'b' value is: %.3lf. The pointer 'e' point to the adress memory: %x. The data stored in this adress is: %.3lf.\n", b, e, *e);
	printf("\nThe 'c' value is: %c. The pointer 'f' point to the adress memory: %x. The data stored in this adress is: %c.\n", c, f, *f);

	printf("\n-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-==-\n");

	printf("\nDo you want change some value? \n(1)Yes \n(2)No \n  > Enter your option: ");
	scanf("%d", &option);

	if(option == 1){
		printf("\nWhich value do you want change? \n(1)a\n(2)b\n(3)c\n >Enter your option: ");
		scanf("%d", &option2);

		if(option2 == 1){
			printf("\n >Enter a new integer value: ");
			scanf("%d", &*d);
			printf("\nUpdated values: a: %d, b: %.2lf, c: %c", a,b,c);
		}
		else if(option2 == 2){
			printf("\n >Enter a new double value: ");
			scanf("%lf", &*e);
			printf("\nUpdated values: a: %d, b: %.2lf, c: %c", a,b,c);
		}
		else if(option2 == 3){
			printf("\n >Enter a new char value: ");
			scanf("%s", &*f);
			printf("\nUpdated values: a: %d, b: %.2lf, c: %c", a,b,c);
		}
		else{
			printf("\n >Wrong option");
		}
	}
	else{
		printf("\nFinished...");
	}

	return 0;
}

=================================================================================================================================================================
//2 e 3. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e exiba o maior endereco.
#include <stdio.h.>
#include <stdlib.h>

int main(){
    int a = 10, b = 20;
    int *c, *d;

    c = &a;
    d = &b;

    printf("\nVariable 'a = %d' adress: %x.\nVariable 'b = %d' adress: %x.\n", *c, c, *d, d);

    if(c > d){
        printf("\nThe 'a' adress it's the largest.");
    }
    else{
        printf("\nThe 'b' adress it's the largest.");
    }
    return 0;
}
=================================================================================================================================================================
/*4. Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas 2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas ´
variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B tera o valor de A. */	
#include <stdio.h>
#include <stdlib.h>

int change(int *x, int *y){
    int z = 0, w = 0;
    printf("\nFROM INSERTED VALUES: \n\n  >First adress: %x \n  >Second adress: %x\n", x,y);
    printf("\nSwitching values...\n");
    z = y;
    w = x;
    x = z;
    y = w;

    printf("\nNEW ADRESSES: \n\n  >First adress: %x \n  >Second adress: %x\n", x,y);
}

int main(){
    int a = 0, b = 0;
    int *x;
    int *y;

    printf("\nEnter two different integer values: ");
    scanf("%d%d", &a,&b);

    x = &a;
    y = &b;

    change(x,y);

    return 0;
}

=================================================================================================================================================================
/*5. Faca um programa que leia dois valores inteiros e chame uma funcao que receba estes 2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na
segunda variavel. Escreva o conteudo das 2 variaveis na tela.*/

#include <stdio.h>
#include <stdlib.h>

int m_size(int *x, int *y){
    int big = 0, low = 0;

    if((*x > *y)){
        big = *x;
        low = *y;
        printf("\nThe highest value is %d with the adress %x\n\nThe lowest value is %d with de adress %x\n", big, x, low, y);
    }
    else if((*x == *y)){
        printf("\nThe data at the adress %x and %x are equals.\n", x,y);
    }
    else{
        big = *y;
        low = *x;
        printf("\nThe highest value is %d with the adress %x\n\nThe lowest value is %d with de adress %x\n", big, y, low, x);
    }
}


int main(){
    int a = 0, b = 0;
    int *x;
    int *y;

    printf("\nEnter two integer values: ");
    scanf("%d%d", &a, &b);

    x = &a;
    y = &b;

    m_size(x,y);

    return 0;
}

=================================================================================================================================================================
/*6.Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faca uma funcao que retorne a soma do dobro dos dois numeros lidos. 
A funcao devera armazenar o dobro de A na propria variavel A e o dobro de B na propria variavel B. */
#include <stdio.h>
#include <stdlib.h>

int sum_two(int *x, int *y){
    int x_two = 0, y_two = 0, sum = 0;
    x_two = (*x) * 2;
    y_two = (*y) * 2;
    sum = x_two + y_two;

    printf("\n   >Calculating the double of %d and %d...\n", *x, *y);
    printf("\n   >The double of %d is %d and the double of %d is %d\n", *x, x_two, *y, y_two);
    printf("\n   >The sum between the %d and %d is %d\n", x_two, y_two, sum);
}

int main(){
    int a = 0, b = 0;
    int *x;
    int *y;

    printf("\nEnter two integer values: ");
    scanf("%d%d", &a,&b);

    x = &a;
    y = &b;

    sum_two(x,y);

    return 0;
}
	
=================================================================================================================================================================
/*7.Crie um programa que contenha uma funcao que permita passar por parametro dois numeros inteiros A e B. A funcao devera calcular a soma entre estes dois numeros e
armazenar o resultado na variavel A. Esta funcao nao devera possuir retorno, mas devera modificar o valor do primeiro parametro. Imprima os valores de A e B na funcao principal. */
#include <stdio.h>
#include <stdlib.h>

int get_num(int x, int y){
    scanf("%d%d", &x, &y);
    printf("\nThe first integer parametrer is %d and the second is %d", x, y);
    printf("\n  >Calculating the sum between %d and %d...", x,y);
    int sum = 0;
    int *z;
    z = &x;
    
    sum = x + y;
    
    *z = sum;

    printf("\n  >After sum operation the first integer parametrer is %d and the second is %d", *z, y);
    
}

int main(){
    int i = 0, j = 0;
    
    printf("\nEnter two integer numbers: ");
    get_num(i,j);
    
    return 0;
}
=================================================================================================================================================================
/*8.Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereco de cada posicao desse array*/

