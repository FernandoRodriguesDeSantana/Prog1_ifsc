//1)Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
//armazene os dados em uma estrutura. Exiba os dados armazenados ao final.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    struct data{
        char name[50];
        int age;
        char adress[100];
    };

    struct data informations;

    printf("---------------Personal Datas---------------");

    printf("\nPerson name: ");
    fflush(stdin);
    fgets(informations.name, 50, stdin);

    printf("\nPerson age: ");
    scanf("%d", &informations.age);

    printf("\nPerson adress: ");
    fflush(stdin);
    fgets(informations.adress, 50, stdin);

    printf("\n---------------Reading the Datas---------------");
    printf("\nPerson name: %s", informations.name);
    printf("\nPerson age: %d\n", informations.age);
    printf("\nPerson adress: %s", informations.adress);

    return 0;

}

//======================================================================================================================================

//2) Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a 
//informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct student{
	char name[50];
	int code;
	char course[50];
};

int main(){
	struct student info[5];
	int i;

	for(i = 0; i < 5; i++){
		printf("Enter the student name: ");
		gets(info[i].name);
		fflush(stdin);

		printf("\nEnter the student code: ");
		scanf("%d", &info[i].code);
		fflush(stdin);

		printf("\nEnter the student course: ");
		gets(info[i].course);
		fflush(stdin);

		printf("\n\n");
	}

	for(i = 0; i < 5; i++){
		printf("\n------------Information of the student------------");

		printf("\nThe student %s with code %d from the course of %s are registered in the system", info[i].name, info[i].code, info[i].course);
		printf("\n.........................Next.........................\n");
	}
	return 0;
}

//======================================================================================================================================

