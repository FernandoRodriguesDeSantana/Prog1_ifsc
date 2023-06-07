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

/*3) Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve 
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota 
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior média geral.
d) Encontre o aluno com menor média geral 
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 
para aprovação*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct student{
	long int code;
	char name[50];
	float grade1, grade2, grade3;
};

int main(){
	int i, n = 5;
	struct student info[n];
	float g_highest = 0, average = 0, a_highest = 0, a_lowest = 0;

		for(i = 0; i < n; i++){
			printf("---------FOR THE %d STUDENT---------", i+1);
			printf("\nEnter the student code: ");
			scanf("%ld", &info[i].code);
			fflush(stdin);

			printf("\nEnter the student name: ");
			gets(info[i].name);
			fflush(stdin);

			printf("\nEnter the firt test grade: ");
			scanf("%f", &info[i].grade1);
			fflush(stdin);
			
			if(info[i].grade1 > g_highest){
				g_highest = info[i].grade1;
			}
			else{
				g_highest = g_highest;
			}

			printf("\nEnter the second test grade: ");
			scanf("%f", &info[i].grade2);
			fflush(stdin);

			printf("\nEnter the third test grade: "); 
			scanf("%f", &info[i].grade3);
			fflush(stdin);

			average = ((info[i].grade1 + info[i].grade2 + info[i].grade3) / 3);
			if(average > a_highest){
				a_highest = average;
			}
			else if(average < a_highest){
				a_lowest = average;
			}
			else{
				a_highest = a_highest;
				a_lowest = a_lowest;
			}

			printf("\nThe info was saved. Code: %ld, Name: %s, Grade 1: %.2f, Grade2: %.2f, Grade3: %.2f\n", info[i].code, info[i].name, info[i].grade1, info[i].grade2, info[i].grade3);

			printf("\n");
		}
			printf("\n----------Conclusions----------");
			printf("\nThe highest grade of the first test are: %f", g_highest);
			printf("\nThe highest average are: %f", a_highest);
			printf("\nThe lowest average are: %f", a_lowest);
		

	return 0;
}

//======================================================================================================================================

