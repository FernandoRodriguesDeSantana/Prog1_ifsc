/*Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de
idade, sexo(M/F) e salário de N pessoas (onde N deve ser informado pelo usuário). Faça um
programa em linguagem C que informe:

a) a média do salário do grupo;
b) o maior e o menor salário do grupo;
c) a quantidade de homens com mais de 30 anos.

*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int n, i;
    float valor = 0, media = 0, total = 0, maior = 0, menor = 0;
    
    printf("Informe a quantidade de pessoas entrevistadas: ");
    scanf("%d", &n);
    
    float salario[n];
    
    for(i = 0; i < n; i++){
        printf("\nInsira o salário do entrevistado numero %d: ", i+1);
        scanf("%f", &valor);
        salario[i] += valor;
        total += salario[i];
    }
    
    media = total / n;
    printf("\n%.2f corresponde a media salarial", media);
    
    return 0;
}
