Lista 02

1) Faça um programa que receba dois números e mostre qual deles é o maior. 

#include <stdio.h> 

#include <math.h> 

  

int main() 

{ 

    float a, b; 

     

    printf("Insert the first number:"); 

    scanf("%f", &a); 

  

    printf("Insert the second number:"); 

    scanf("%f", &b); 

     

    if(a > b) 

    { 

        printf("The first number is largest than the second number"); 

    } 

     

    else if(a == b) 

    { 

        printf("Both numbers are equal"); 

    } 

    else 

    { 

        printf("The second number is largest than the first number"); 

    } 

    return 0; 

} 

======================================================================================

2) Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada do número. Se o número for negativo, mostre uma mensagem dizendo que o número e inválido. 

#include <stdio.h> 

#include <math.h> 

  

int main() 

{ 

    float a, root; 

     

    printf("Insert a positive number:"); 

    scanf("%f", &a); 

     

    if(a >= 1) 

    { 

        root = sqrt(a); 

        printf("The square root of this number is: %2.2f", root); 

    } 

    else 

    { 

        printf("The inserted number is not valid.");     

    } 

     

    return 0; 

} 
 
======================================================================================

3)Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar 

#include <stdio.h> 

#include <math.h> 

  

int main() 

{ 

    int a, even; 

     

    printf("Insert a number:"); 

    scanf("%d", &a); 

     

    even = a % 2; 

    if(even == 0) 

    { 

        printf("The inserted number is even"); 

    } 

    else 

    { 

        printf("The inserted number is odd"); 

    } 

    return 0; 

} 

====================================================================================== 
4)Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima: “Empréstimo concedido”. 

#include <stdio.h> 

#include <math.h> 

  

int main() 

{ 

    float salary, installment, percentage, loan; 

     

    printf("Insert your salary: "); 

    scanf("%f", &salary); 

  

    printf("Insert the loan value: "); 

    scanf("%f", &loan); 

     

    percentage = salary * (0.2); 

     

    printf("The 20 percent of your salary is worth: %6.2f", percentage); 

     

    if(loan > percentage) 

    { 

        printf("\nThe money loan will not be granted"); 

    } 

     

    else 

    { 

        printf("\nThe money loan will be granted"); 

    } 

     

    return 0; 

} 

====================================================================================== 

5) Faça um programa que receba a alturae o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura) 

#include <stdio.h> 

#include <math.h> 



int main() 

{ 

    float weight = 0, gender, height; 

     

    printf("Insert your gender: 1 for Male and 2 for Female: "); 

    scanf("%f", &gender); 

     

    printf("Insert your height: "); 

    scanf("%f", &height); 

     

    if(gender == 1) 

    { 

        weight = ((72.7 * height) - 58); 

        printf("Your ideal weight is: %f", weight); 

    } 

    else if(gender == 2) 

    { 

        weight  = ((62.1 * height) - 44.7); 

        printf("Your ideal weight is: %f", weight); 

    } 

    else 

    { 

        printf("Something is wrong! Try again."); 

    } 

     

    return 0; 

} 

 

2ª Tentativa (mais melhor): 

#include <stdio.h> 

#include <math.h> 

  

int main() 

{ 

    char gender; 

    float height, weight = 0; 

     

    printf("Insert your gender: 'M' for male and 'F' for female: "); 

    scanf("%c", &gender); 

     

    printf("Insert yout height in meters (x.y): "); 

    scanf("%f", &height); 

     

    if(gender == 'm' || gender == 'M') 

    { 

        weight = ((72.7 * height) - 58); 

        printf("Your ideal weight is: %f", weight); 

    } 

     

    else if(gender == 'f' || gender == 'F') 

    { 

        weight = ((62.1 * height) - 44.7); 

        printf("Your ideal weight is: %f", weight); 

    } 

     

    return 0; 

     

} 

======================================================================================

 6)Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, asoma de todos os seus algarismos. Por exemplo, ao número 251 corresponder ao valor 
 8 (2 + 5 + 1). Se o número lido não for maior do que zero, o programa terminar a com a mensagem “Número inválido”
 
 
 
 ======================================================================================
 
 7)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   float p1, p2, p3, a,b, nota = 0;

    printf("Insira o primeiro peso: ");
    scanf("%f", &a);

    printf("Insira o segundo peso: ");
    scanf("%f", &b);

    printf("Insira a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Insira a nota da segunda prova: ");
    scanf("%f", &p2);

    printf("Insira a nota da terceira prova: ");
    scanf("%f", &p3);

    nota = ((a*p1)+(a*p2)+(b*p3)) / 3;

    printf("A media ponderada do aluno vale: %f", nota);

    if (nota >= 6.0){
        printf("O aluno está aprovado");
    }
    else{
        printf("O aluno está reprovado");
    }

    return 0;
}

======================================================================================

9)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &number);

    switch (number){
        case 1:
            printf("Monday");
        break;
        case 2:
            printf("Tuesday");
        break;
        case 3:
            printf("Wednesday");
        break;
        case 4:
            printf("Thursday");
        break;
        case 5:
            printf("Friday");
        break;
        case 6:
            printf("Saturday");
        break;
        case 7:
            printf("Sunday");
        break;
}
    return 0;
}

==================================================================

10)

 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float result;

    printf("Enter two numbers. After, input which operation do you want make: 1(+), 2 (-), 3 (/) and 4(X)");
    scanf("%d%d%d", &a, &b, &c);

    switch(c)
    {
        case 1:
            result = a + b;
            printf("%.2f", result);
        break;

        case 2:
            result = a - b;
            printf("%.2f", result);
        break;

        case 3:
            result = a / b;
            printf("%.2f", result);
        break;

        case 4:
            result = a * b;
            printf("%.2f", result);
        break;
    }

    return 0;
}

=================================================================================
11)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, resto1, resto2;

    printf("Enter a integer number: ");
    scanf("%d", &a);

    resto1 = a % 3;
    resto2 = a % 5;

    if(resto1 == 0){
        printf("The number is divisible by 3");
    }

    else if (resto2 == 0){
        printf("The number is divisible by 5");
    }

    else if (resto1 == 0 || resto2 == 0){
        printf("The inserted number can't be divisible by 3 and by 5 at the same time.");
    }

    else{
        printf("The number is divisible by another number");
    }
    return 0;
}

===========================================================================================
12)
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a,b,c, sum1 = 0, sum2 = 0, sum3 = 0;

    printf("Enter three values: ");
    scanf("%d%d%d", &a, &b, &c);

    sum1 = a + b;
    sum2 = a + c;
    sum3 = b + c;

    if(c < sum1 && b < sum2 && a < sum3){
        if (a == b && b == c){
            printf("\nIt's a equilateral triangle.");
        }
        else if (a == b || a == c || b == c){
            printf("\nIt's a isosceles triangle.");
        }
        else if (a != b && b != c && a != c){
            printf("\nIt's a scalene triangle.");
        }
        else{
            printf("Something is wrong! Try it again...");
        }
    }
    else{
        printf("Isn't a triangle.");
    }


    return 0;
}

============================================================================================
16)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int i = 0, a, b, sum1 = 0, sum2 = 0, p = 0, score = 0;

    srand(time(NULL)); // necessary to always sort different numbers

    do{
        printf("\nThe first number is %d and the second number is %d.", rand() %100, rand() %100);

        printf("\nFor start the game enter the first and the second number: ");
        scanf("%d%d", &a, &b);

        sum1 = a + b;

        printf("\nHow much is the sum of these numbers?");
        scanf("%d", &sum2);

        if (sum1 == sum2){
            p = p + 1;
            printf("Great!");

        }
        else{
            printf("Wrowng! Try it again...");
        }
        i++;
    }while(i < 5);

    printf("\nYour score is %d.", p);

    return 0;
}

===================================================================================

17) 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Enter three values: \n");
    scanf("%d%d%d", &a, &b, &c);

    if(a < b && b < c){
        printf("%d %d %d", a,b,c);
    }
    else if(a < c && b > c){
        printf("%d %d %d", a,c,b);
    }
    else if(b < c && a > c){
        printf("%d %d %d", b,c,a);
    }
    else if(b < a && c > a){
        printf("%d %d %d", b,a,c);
    }
    else if(c < b && a > b){
        printf("%d %d %d", c,b,a);
    }
    else{
        printf("%d %d %d", c,a,b);
    }

    return 0;
}

=========================================================================================================

19)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b = 0,c;

    printf("Enter the old price: ");
    scanf("%f", &a);

    if(a <= 50)
    {
        b = a + (a * 0.05);
        printf("The new price is: %2.2f", b);
    }
    else if(a >= 50 && a <= 100)
    {
        b = a + (a * 0.1);
        printf("The new price is: %2.2f", b);
    }
    else
    {
        b = a + (a * 0.15);
        printf("The new price is: %2.2f", b);
    }

    if(b < 80)
    {
        printf("\nBarato");
    }
    else if(b >= 80 && b < 120)
    {
        printf("\nNormal");
    }
    else if(b >= 120 && b < 200)
    {
        printf("\nCaro");
    }
    else
    {
        printf("\nMuito caro");
    }
    return 0;
}

========================================================================================


