#include <stdio.h>

int main() {
  int a;
  printf("Hello! You're welcome!\n");

  printf("How old are you?");
  scanf("%d", &a);

  printf("So, you have %d years old", a);

  /* Os comandos printf + getchar servem para que haja uma finalização
     do programa, porém sem fechar o terminal. Dessa forma é possível
     analisar o funcionamento do código. 
  */

  /* getchar significa 'pegar' uma char ('Caractér') originada do teclado
     portanto é uma função de entrada.
  */

  printf("\nPressione qualquer tecla para finalizar.");
  getchar();

  // é interessante rodar este código no code::blocks para melhor entendimento.

  return 0;
}
