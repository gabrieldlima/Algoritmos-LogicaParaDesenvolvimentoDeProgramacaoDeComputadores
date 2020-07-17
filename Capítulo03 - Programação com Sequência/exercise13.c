//Date: January, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que leia três valores númericos inteiros (representados pelas variáveis A, B e C) e apresente|
|como resultado final o valor da soma dos quadrados dos três valores lidos.                                         |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int a, b, c, calculo; 

    printf("Digite três números inteiros quaisquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);

    calculo = pow(a, 2) + pow(b, 2) + pow(c, 2);

    printf("A soma dos quadrados dos três valores lidos é igual a %i.\n", calculo);

    return 0;
}
