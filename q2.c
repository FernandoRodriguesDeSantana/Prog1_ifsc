#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k;

    for(i = 1; i <= 7; i++){         // número de linhas
        for(j = 6; j >= i - 1; j--){ // número de espaços em branco, na ordem decrescente 
            printf(" ");
        }
        for(k = 1; k <= i; k++){     // número de asteriscos na ordem crescente
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
