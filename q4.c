#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "pt_BR");
    int i, vetor[10], opcao;

    srand(time(NULL));

    for(i = 0; i < 10; i++){
        vetor[i] = rand() % 99;
    }

    printf("\n\n");
    
    for(i = 0; i < 10; i++){
        printf(" %d ", vetor[i]);
    }
    
    printf("\n0 - Finalizar programa\n1 - Imprimir numeros em ordem crescente\n2 - Imprimir numeros em ordem decrescente\nSua opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 0:
            printf("Programa finalizado");
            break;
        case 1:
            printf("\n");
            for(i = 0; i < 10; i++){
                printf(" %d ", vetor[i]);
            }
            break;
        case 2: 
            printf("\n");
            for(i = 9; i >=0; i--){
                printf(" %d ", vetor[i]);
            }
            break;
    }

    return 0;
}
