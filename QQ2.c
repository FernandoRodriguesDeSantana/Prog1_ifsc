/*  
NOME: FERNANDO RODRIGUES DE SANTANA
MATRÍCULA: 202110806626
    
Q2. Faça um programa em Linguagem C que gere 10 números inteiros e aleatórios até 99 e os armazene em um vetor. Em
seguida, leia um código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar
*/

#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "pt_BR");
    
    int vetor[10], i, opcao = 0;
    
    srand(time(NULL));
    
    do{
        printf("\n");
        printf("Aqui estão 10 números gerados aleatoriamente:");
        for(i = 0; i < 10; i++){
            vetor[i] = rand() % 99;
            printf(" %d ", vetor[i]);
        }
        printf("\n");
        printf("\nDIGITE:\n 0-Para finalizar o programa\n 1-Imprimir os números gerados aleatoriamente em ordem crescente\n 2-Imprimir os números gerados aleatoriamente em ordem decrescente\n Sua opção: ");
        scanf("%d", &opcao);
    
        printf("\n");
        
        switch(opcao){
            case 0:
                printf("Finalizando o programa...");
                break;
                
            case 1:
                printf("Números em ordem crescente: ");
                for(i = 0; i < 10; i++){
                    printf(" %d ", vetor[i]);
                }
                break;
                
            case 2:
                printf("Números em ordem decrescente:");
                for(i = 9; i >= 0; i--){
                    printf(" %d ", vetor[i]);
                }
                break;
        }
        printf("\n\n");
    } while(opcao != 0);
    
    return 0;
}
