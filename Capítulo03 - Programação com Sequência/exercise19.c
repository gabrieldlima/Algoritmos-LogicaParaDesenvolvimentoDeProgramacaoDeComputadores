//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia dois valores reais desconhecidos representados pelas variáveis A e B. Calcular e aprese-|
|sentar os resultados das quatro operações aritiméticas básicas.                                                       |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, sum, sub, mul, div;

    printf("Digite dois números reais quaisquer:\n1º- ");
    scanf("%f", &a);
    printf("2º- ");
    scanf("%f", &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("%.2f + %.2f = %.2f\n"
    "%.2f - %.2f = %.2f\n"
    "%.2f * %.2f = %.2f\n"
    "%.2f / %.2f = %.2f\n", a, b, sum, a, b, sub, a, b, mul, a, b, div);

    
    
    return 0;
}
