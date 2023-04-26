/*  
NOME: FERNANDO RODRIGUES DE SANTANA
MATRÍCULA: 202110806626
    
Q1. Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade, sexo (M/F) e salário de N
pessoas (onde N deve ser informado pelo usuário). Faça um programa em Linguagem C que informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$3000,00
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR");
    
    int n, i;
    
    printf("Digite o número de pessoas entrevistadas: ");
    scanf("%d", &n);
    
    int idade[n], sexo[n];
    float salario[n];
    
    for(i = 1; i <= n; i++){
        printf("\nPara o entrevistado de número %d. Digite:", i);
        
        
        printf("\nSEXO\n1-Masculino\n2-Feminino\nInsira: ");
        scanf("%d", &sexo[i]);
        
        
        printf("\nIDADE\nInsira: ");
        scanf("%d", &idade[i]);
        
        
        printf("\nSALÁRIO\nInsira: ");
        scanf("%f", &salario[i]);
    }

    printf("\nOs dados inseridos foram: ");   
    
    for(i = 1; i <= n; i++){
        if(sexo[i] == 1){
            printf("\nEntrevistado número %d: Sexo: Masculino; Idade: %d; Salário: R$ %.2f", i, idade[i], salario[i]);    
        }
        else{
            printf("\nEntrevistado número %d: Sexo: Feminino; Idade: %d; Salário: R$ %.2f", i, idade[i], salario[i]);    
        }
    }
    
    float soma = 0, media = 0;
    int menor = 0, maior = 0, count = 0;
    
    for(i = 1; i <= n; i++){
        soma += salario[i];
    }
    
    media = soma / n;
    printf("\n");
    printf("\nCONCLUSÕES:");
    printf("\nSoma dos salários dos entrevistados: R$ %.2f", soma);
    
    printf("\nMedia dos salários entrevistados: R$ %.2f", media);
    
    for(i = 1; i <= n; i++){
        if(idade[i] > maior){
            maior = idade[i];
            menor = idade[i];
        }
    }
    
    for(i = 1; i <= n; i++){
        if(idade[i] < menor){
            menor = idade[i];
        }
    }
    
    printf("\n");
    printf("Entre os entrevistados o de maior idade tem %d anos enquanto que o de menor idade tem %d anos.", maior, menor);
    
    for(i = 1; i <= n; i++){
        if((salario[i] <= 3000) && (sexo[i] == 2)){
            count += 1;
        }
    }
    
    printf("\nO número de mulheres entrevistadas que ganham um salário de até R$ 3000,00 é de: %d mulheres.", count);
    return 0;
}
