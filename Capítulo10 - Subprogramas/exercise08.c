//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa de computador que apresente o valor de uma temperatura em|
|graus Fahrenheit. O programa deve ler a temperatura em graus Celcius.         |
*/

#include <stdio.h>

float temp(float celcius);

int main(void)
{
    float number;

    printf("Celcius: ");
    scanf("%f", &number);

    printf("Fahrenheit: %.1fºF\n", temp(number));

    return 0;
}

float temp(float celcius)
{
    float result;

    result = (1.8 * celcius) + 32;

    return result;
}
