// 1) 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[6] = {1,0,5,-2,-5,7},i = 0, soma = 0, n = 0;

    for(i = 0; i < 6; i++){
        if(i == 0){
            soma += a[i];
        }
        else if(i == 1){
            soma += a[i];
        }
        else if(i == 5){
            soma += a[i];
        }
        else{
            soma += 0;
        }
    }

    printf("A soma de cada posicao vale: %d", soma);

    printf("\nInsira a posicao que quer alterar o valor: ");
    scanf("%d",&n);

    printf("\nInsira o novo valor para a posicao: ");
    scanf("%d", &a[n]);

    for(i = 0; i < 6; i++){
        printf("%d ", a[i]);
    }

    return 0;
}

//=======================================================================

//3)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a[10], b[10];
    int i;

    printf("Insira 10 valores: ");
    for(i = 0; i < 10; i++){
        scanf("%f", &a[i]);
    }

    for(i = 0; i < 10; i++){
        b[i] = pow(a[i], 2);
    }

    for(i = 0; i < 10; i++){
        printf(" %.2f ", b[i]);
    }

    return 0;
}
//=======================================================================

//5)
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10], i, maior = 0, menor = 0;

    printf("Insira 10 valores:\n ");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10; i++){
        printf(" %d ", a[i]);
    }

    for(i = 0; i <  10; i++){
        if(a[i] > maior){
            maior = a[i];
        }
        else if(a[i] < menor){
            menor = a[i];
        }
        else{
            maior = maior;
            menor = menor;
        }
    }

    printf("\n%d e o menor valor, enquanto %d e o maior valor.", menor, maior);

    return 0;
}
//=======================================================================


  
