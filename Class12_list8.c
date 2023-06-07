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
/*4) Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma turma de ´
até 10 alunos. Após ler todos os dados digitados, e depois de armazena-los em um vetor
de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias
finais (use uma média ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

struct student{
    long long int registration;
    char name [50];
    int code;
    float grade1, grade2, average;
};

int main(){
    int i, n, option = 0;
    printf("How many students are enrolled in the class? Enter: ");
    scanf("%d", &n);
    fflush(stdin);

    struct student info[n];

    for(i = 0; i < n; i++){
        printf("\n-----------Student number %d-----------", i+1);
        printf("\nEnter the registration number: ");
        scanf("%lld", &info[i].registration);
        fflush(stdin);

        printf("\nEnter the student name: ");
        gets(info[i].name);
        fflush(stdin);

        printf("\nEnter the course code: ");
        scanf("%d", &info[i].code);

        printf("\nEnter the first grade: ");
        scanf("%f", &info[i].grade1);
        fflush(stdin);

        printf("\nEnter the second grade: ");
        scanf("%f", &info[i].grade2);
        fflush(stdin);

        info[i].average = (((1*info[i].grade1) + (2*info[i].grade2)) / 3);

        printf("\nThe informations about the student number %d was saved!\n", i+1);

        printf("\n\n");
    }

    printf("\nDo you want display the stored informations? 1.Yes and 2.No: ");
    scanf("%d", &option);

    if(option == 1){
        for(i = 0; i < n; i++){
            printf("\n-----------Informations about the student number %d-----------", i+1);
            printf("\nName: %s", info[i].name);
            printf("\nRegistration: %ldd", info[i].registration);
            printf("\nCourse code: %d", info[i].code);
            printf("\nGrade 1 = %.2f; Grade 2 = %.2f; Average: %.2f", info[i].grade1, info[i].grade2, info[i].average);
        }
    }

    return 0;
}

//======================================================================================================================================

/*5) Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data
de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
caracteres) e salario. Os dados devem ser digitados pelo usuário, armazenados na
estrutura e exibidos na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

struct worker{
    char name[50], job[30];
    int age, sex, cpf, day, month, year, code;
    float salary;
};

int main(){
    struct worker info;
    int option = 0;
    printf("Enter the worker name: ");
    gets(info.name);
    fflush(stdin);

    printf("\nEnter the worker age: ");
    scanf("%d", &info.age);
    fflush(stdin);

    printf("\nEnter the worker sex (1.Masculine and 2.Feminine): ");
    scanf("%d", &info.sex);
    fflush(stdin);

    printf("\nEnter the worker cpf: ");
    scanf("%d", &info.cpf);
    fflush(stdin);

    printf("\nEnter the day, month and year of the worker birthday: ");
    scanf("%d%d%d", &info.day, &info.month, &info.year);
    fflush(stdin);

    printf("\nEnter the sector code of the worker: ");
    scanf("%d", &info.code);
    fflush(stdin);

    printf("\nEnter the worker job: ");
    gets(info.job);
    fflush(stdin);

    printf("\nEnter the worker salary ($): ");
    scanf("%f", &info.salary);
    fflush(stdin);

    printf("\n-------------The informations about the worker %s was saved.-------------\n", info.name);

    printf("\nDo you want print the informations about %s? 1.Yes or 2.No: ", info.name);
    scanf("%d", &option);
    fflush(stdin);

    if(option == 1){
        printf("\n-------------Printing....-------------\n");
        printf("\nName: %s", info.name);
        printf("\nAge: %d", info.age);
        if(info.sex == 1){
            printf("\nSexo: Masculine");
        }
        else{
            printf("\nSexo: Feminine");
        }
        printf("\nCPF: %d", info.cpf);
        printf("\nBirthday: %d / %d / %d", info.day, info.month, info.year);
        printf("\nSector code: %d", info.code);
        printf("\nJob: %s", info.job);
        printf("\nSalary: %f", info.salary);
        printf("\n");
    }

    return 0;
}

//======================================================================================================================================

/*6) Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct person{
    char name[50];
    char adress[100];
    int phone;
};

int main(){
    struct person info;
    
    
}

