//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler dois valores numéricos inteiros (representados pelas variáveis A e B) e apresente o resultado do quadrado da divi-|
|são do primeiro valor (variável A) com o segundo valor (variável B).                                                  |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a, b, calculo;

    printf("Digite dois números inteiros:\n1º- ");
    scanf("%f", &a);
    printf("2º- ");
    scanf("%f", &b);

    calculo = pow((a / b), 2);

    printf("O quadrado da divisão dos números digitados é %.2f.\n", calculo);

    return 0;
}
