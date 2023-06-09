1) Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int a, i;

    for(i = 1; i <= 5; i++)
    {
        a = 3 * i;
        printf("\n%d", a);
    }
}
=========================================================================================================================================================================
2) Faça um programa utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, a = 11;

    do
    {
        a--;
        printf("\n%d", a);

    } while(a > 0);

        printf("\nFim");
        return 0;
}
=========================================================================================================================================================================
4) Faça um programa que peça ao usuário para digitar 10 valores e some-os.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i, a, soma = 0;

    do
    {
        printf("Enter a number: \n");
        scanf("%d", &a);
        soma = soma + a;
        i++;

    } while(i < 10);

    printf("\n%d", soma);
    return 0;
}
=========================================================================================================================================================================
5) Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i = 0, a, maior, menor;

    while(i < 10)
    {
        printf("Enter a number: \n");
        scanf("%d", &a);
        i++;

        if(i == 0)
        {
            maior = a;
            menor = a;
        }
        else if(a > maior)
        {
            maior = a;
        }
        else if(a < menor)
        {
            menor = a;
        }
    }
    printf("Maior: %d", maior);
    printf("\nMenor: %d", menor);

    return 0;
}
=========================================================================================================================================================================
6) Faça um programa que leia um número inteiro N e depois imprima os N primeiros  números naturais ımpares.

#include <stdio.h>

int main()
{
    int a, i, num;

    printf("Enter a integer number: ");
    scanf("%d", &a);

    for(i = 0; i < 10; i++)
    {
        num = a + i;

        if((num % 2) != 0)
        {
            printf("\n%d", num);
        }
    }

    return 0;
}

=========================================================================================================================================================================
7) Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
#include <stdio.h>

int main()
{
    int a = 0, i, num = 0;

    // Forma fixa
    for(i = 0; i < 50; i++)
    {
        a = a + i;
    }

    printf("%d", a);

    // se o usuario insere um valor para soma:
    printf("\nEnter a integer number: ");
    scanf("%d", &a);

    num = a*(a+1) / 2;

    printf("\nA soma dos numeros naturais ate %d vale: %d", a, num);

    return 0;
}
=========================================================================================================================================================================
8) Faça um programa que leia um número inteiro positivo N e imprima todos os números  naturais de 0 até N em ordem decrescente.
#include <stdio.h>

int main()
{
    int n = 0, i;

    printf("Enter positive number: ");
    scanf("%d", &n);

    for(i = n; i >= 0; i--)
    {
        printf("\n%d", i);
    }
    return 0;
}
=========================================================================================================================================================================
10)Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros números naturais.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int soma = 0,a, i;

  printf("Enter a positive number: ");
  scanf("%d", &a);

  for(i=0; i <= a; i++)
    {
      soma = soma + i;
    }
  printf("The sum is: %d", soma);

  return 0;
      
}
=========================================================================================================================================================================
11) Escreva um algoritmo que leia certa quantidade de números e imprima o maior deles e quantas vezes o maior número foi lido. 
    A quantidade de números a serem lidos deve ser fornecida pelo usuário 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n = 0, maior, menor, count = 0;

  printf("Enter any numbers. Enter '0' to stop.");

  maior = n;
  menor = n;
  
  do{
    printf("\nEnter a number: ");
    scanf("%d", &n);

    if(n > maior)
    {
      maior = n;
      count = count + 1;
    }
    else if(n < menor)
    {
      menor = n;
    } 
  } while(n != 0);
  
    printf("\nThe largerst number is %d and the lowest number is %d. The largest number was changed %d times.", maior, menor, count);
  
    return 0;
}
=========================================================================================================================================================================
12) Faça um programa que receba dois números. Calcule e mostre:
     A soma dos números pares desse intervalo de números, incluindo os números
    digitados;
     A multiplicação dos números ımpares desse intervalo, incluindo os digitados;
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,resto = 0, sum = 0, mult = 1;
    int i;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    if(a < b){
        for(i = a; i <= b; i++){
            if((i % 2) == 0){
                sum += i;
            }
            else{
                mult *= i;
            }
        }
        printf("\nNumbers: %2.1f and %2.1f", a,b);
        printf("\nSum: %.3f", sum);
        printf("\nMult: %.3f", mult);
    }

    else{
        for(i = b; i <= a; i++){
            if((i % 2) == 0){
                sum += i;
            }
            else{
                mult *= i;
            }
        }
        printf("\nNumbers: %.1f and %.1f", a,b);
        printf("\nSum: %.3f", sum);
        printf("\nMult: %.3f", mult);
    }

    return 0;
}
=========================================================================================================================================================================
/*Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor serão necessárias para atender ao
saque com a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20,
10, 5, 2 e 1 real.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int value, banknote[7] = {1,2,5,10,20,50,100},  n=0, nil = 0;
    //int a = 1, b = 2, c = 5, d = 10, e = 20, f = 50, g = 100;
    printf("How much money do you want? ");
    scanf("%d", &value);

    switch (value) {
        case 1:
            printf("\nPrinting a 1 real banknote");
            break;
        case 2:
            printf("\nPrinting a 2 real banknote");
            break;
        case 5:
            printf("\nPrinting a 5 real banknote");
            break;
        case 10:
            printf("\nPrinting a 10 real banknote");
            break;
        case 20:
            printf("\nPrinting a 20 real banknote");
            break;
        case 50:
            printf("\nPrinting a 50 real banknote");
            break;
        case 100:
            printf("\nPrinting a 100 real banknote");
            break;
        default:
            do{
                if(value >= 2 && value <= 5){
                    n = n + banknote[1];
                    printf("\n%d", banknote[1]);
                    nil = value - n;
                }
                else if(value >= 5 && value <= 10){
                    n = n + banknote[3];
                    printf("\n%d", banknote[3]);
                    nil = value - n;
                }
                else if(value >= 10 && value <= 20){
                    n = n + banknote[4];
                    printf("\n%d", banknote[4]);
                    nil = value - n;
                }

            } while(nil != 0);


            break;
    }

    return 0;

}
