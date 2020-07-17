//Date: January, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que leia três valores númericos inteiros (representados pelas variáveis A, B e C) e apresente|
|como resultado final o valor do quadrado da soma dos três valores lidos.                                           | 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int a, b, c, calculo;

    printf("Digite três números inteiros quaiquer:\n1º- ");
    scanf("%i", &a);
    printf("2º- ");
    scanf("%i", &b);
    printf("3º- ");
    scanf("%i", &c);

    calculo = pow((a + b + c), 2);

    printf("O quadrado da soma dos três valores lidos é igual a %i.\n", calculo);

    return 0;
}
