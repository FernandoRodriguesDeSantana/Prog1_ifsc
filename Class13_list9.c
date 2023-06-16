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
		printf("\nDo you want change which value? \n(1)a\n(2)b\n(3)c\n >Enter your option: ");
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
//2. Escreva um programa que contenha duas variaveis inteiras. Compare seus enderecos e exiba o maior endereco.
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
	
