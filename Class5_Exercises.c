Archive link: https://bit.ly/41DTpPK

1) Build a code for get a integer number and print it.

#include <stdio.h>
#include <math.h>

int main()
{   
    int number;
    printf("Please, input a integer number: ");
    scanf("%d", &number);
    printf("The inputed number is: %d", number);
    
    return 0;
}

============================================================================
2) Build a code for get a float number and print it.

#include <stdio.h>
#include <math.h>

int main()
{   
    float number;
    printf("Please, input a float number: ");
    scanf("%f", &number);
    printf("The inputed number is: %2.1f", number);
    
    return 0;
}

============================================================================
3) Ask to the user for insert three integer numbers and print them sum.

#include <stdio.h>
#include <math.h>

int main()
{
    int number1, number2, number3, sum = 0;
    
    printf("Insert the first number: ");
    scanf("%d", &number1);
    
    printf("Insert the second number: ");
    scanf("%d", &number2);
    
    printf("Insert the third number: ");
    scanf("%d", &number3); 
    
    sum = number1 + number2 + number3;
    
    printf("The sum of the inserted number is: %d", sum);
    
    return 0;
}

============================================================================
4) Read a real number and print the result of square that number.

#include <stdio.h>
#include <math.h>

int main()
{
    float number, square = 0;
    
    printf("Insert a real number: ");
    scanf("%f", &number);
    
    square = pow(number,2);
    
    printf("The square of the inserted number is: %1.2f", square);
    
    return 0;
}

============================================================================
5) Read a real number and print its fifth parth.

#include <stdio.h>
#include <math.h>

int main()
{
    float number, division = 0;
    
    printf("Insert a real number: ");
    scanf("%f", &number);
    
    division = number / 5;
    
    printf("The fifth part of your number is: %1.2f", division);
    
    return 0;
}

============================================================================
6) Read a temperature in degrees Celsius and convert to degrees Fahrenheit.

#include <stdio.h>
#include <math.h>

int main()
{
    float celsius, fahrenheit = 0;
    
    printf("Insert a value in degrees Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit = ((celsius * (9.0/5.0) + 32));
    printf("The converted temperature is: %1.2f", fahrenheit);
    
    return 0;
}

============================================================================
7) Read a temperature in degrees Fahrenheit for convert to degrees Celsius and show the result.

#include <stdio.h>
#include <math.h>

int main()
{
    float fahrenheit, celsius = 0;
    
    printf("Insert a temperature in Fahrenheit degrees: ");
    scanf("%f", &fahrenheit);
    
    celsius = (5.0 * ((fahrenheit - 32) / 9));
    
    printf("The converted temperature is: %1.2f", celsius);
    
    return 0;
}

============================================================================
8) Read a temperature in degrees Kelvin for convert to degrees Celsius and show the result.

#include <stdio.h>
#include <math.h>

int main()
{
    float kelvin, celsius =0;
    
    printf("Insert a tempeerature in degrees Kelvin: ");
    scanf("%f", &kelvin);
    
    celsius = kelvin - 273.15;

    printf("The converted temperature is: %1.2f", celsius);
    
    return 0;
}

============================================================================
9) Read a temperature in degrees Celsius for convert to degrees Kelvin and print the result.

#include <stdio.h>
#include <math.h>

int main()
{
    float celsius, kelvin = 0;
    
    printf("Insert a temperature in degrees Celsius: ");
    scanf("%f", &celsius);
    
    kelvin = celsius + 273.15;
    
    printf("The converted temperature is: %1.2f", kelvin);
    
    return 0;
}

============================================================================
10) Read a speed in km/h for convert to m/s and print the result.

#include <stdio.h>
#include <math.h>

int main()
{
    float km_h, m_s = 0;

    printf("Insert a speed in Km/h: ");
    scanf("%f", &km_h);
    
    m_s = km_h / 3.6;
    
    printf("The converted speed is: %f m/s", m_s);
    
    return 0;
}

============================================================================
11) Read a speed in m/s for convert to km/h and print the result.

#include <stdio.h>
#include <math.h>

int main()
{
    float m_s, km_h = 0;
    
    printf("Insert a speed in m/s: ");
    scanf("%f", &m_s);
    
    km_h = m_s * 3.6;
    
    printf("The converted speed is: %f km/h", km_h);
    return 0;
}

============================================================================
12) Read a angle in degrees for convert to radians and print the result.

#include <stdio.h>
#include <math.h>

int main()
{
    float degrees, radians = 0;
    
    printf("Insert a angle in degrees: ");
    scanf("%f", &degrees);
    
    radians = degrees * (3.14/180);
    
    printf("The converted angle is: %f radians", radians);
    
    return 0;
}

============================================================================
13) Read a angle in radians for convert to degrees and print the result.

#include <stdio.h>
#include <math.h>

int main()
{
    float degrees = 0, radians;
    
    printf("Insert a angle in radians: ");
    scanf("%f", &radians);
    
    degrees = radians * (180/3.14);
    
    printf("The converted angle is: %f degrees", degrees);
    
    return 0;
}

============================================================================
