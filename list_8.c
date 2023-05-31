#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
//armazene os dados em uma estrutura. Exiba os dados armazenados ao final.

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
