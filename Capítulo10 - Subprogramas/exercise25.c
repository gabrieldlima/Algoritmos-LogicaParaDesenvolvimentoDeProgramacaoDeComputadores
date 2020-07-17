//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que apresente o valor de uma temperatura em graus Celcius|
|O programa deve ler a temperatura em graus Fahrenheit.                        |
*/

#include <stdio.h>

float temp(float fahrenheit);

int main(void)
{
    float number;

    printf("Fahrenheit: ");
    scanf("%f", &number);

    printf("Celcius: %.1fºF\n", temp(number));

    return 0;
}

float temp(float fahrenheit)
{
    float result;

    result = (fahrenheit - 32) * 5 / 9;

    return result;
}
