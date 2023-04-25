#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    int i, n;

    printf("Informe o numero de pessoas que participaram da pesquisa: ");
    scanf("%d", &n);

    int idade[n], sexo[n];
    float salario[n];

    for(i = 0; i < n; i++){
        printf("\n\nPara o candidato de numero %d, insira: ", i+1);

        printf("\nSexo, onde o numero 1 serve para o sexo masculino e o 2 para o sexo feminino: ");
        scanf("%d", &sexo[i]);

        printf("\nSua idade: ");
        scanf("%d", &idade[i]);
        
        printf("\nSeu salario: ");
        scanf("%f", &salario[i]);
    }

    printf("\n=====================================================================================================================\n");
    
    for(i = 0; i < n; i++){
        if(sexo[i] == 1){
            printf("\nO candidato de numero %d eh do sexo masculino, possui %d anos e ganha um salario de R$ %.2f .", i+1, idade[i], salario[i]);
        }

        else{
            printf("\nO candidato de numero %d eh do sexo feminino, possui %d anos e ganha um salario de R$ %.2f .",i+1,idade[i],salario[i]);

        }
    }

    float soma = 0, media = 0;

    for(i = 0; i < n; i++){
        soma += salario[i];
    }

    media = soma / n;

    printf("\n=====================================================================================================================\n");
    
    printf("\nA media salarial do grupo eh de R$ %.2f\n", media);

    int maior = 0, menor = 0;
    

    for(i = 0; i < n; i++){
        if(idade[i] > maior){
            maior = idade[i];
        }
    }
    for(i = 0; i < n; i++){
        if (idade[i] < maior){
            menor = idade[i];
        }
    }

    printf("\nA maior idade eh de %d anos enquanto que a menor idade eh de %d anos.\n", maior, menor);

    int count = 0;

    for(i = 0; i < n; i++){
        if((sexo[i] == 2) && (salario[i] <= 2000)){
            count += 1;
        }
    }

    printf(\n"A quantidade de mulheres com salario de ate R$ 2000 eh de %d.", count);

    return 0;

}
