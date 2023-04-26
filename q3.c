#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR");

    int x = 0, y = 0, i = 0, j = 0, count = 0;
    
    printf("Insira um valor inteiro para a variável X e outro para variável Y: ");
    scanf("%d%d", &x, &y);

    printf("Os números iniciados em 1 e terminados em %d, pulando de linha a cada %d numeros, sao:\n", x, y);
    for(i = 1; i <= y; i++){
        printf("%d ", i);
        count += 1;

        if(count == x){
            printf("\n");
            count = 0;
        }

    }

    return 0;

}
