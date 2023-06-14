/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a
modificacao.*/

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

	return 0;
}

=================================================================================================================================================================
  
