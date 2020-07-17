//Date: January, 2020
//Author: Gabrielgscript;

/*
|Ler dois valores númericos inteiros(representados pelas variáveis A e B) e apresentar o resultado do quadrado da dife-|
|rença do primeiro valor(variável A) em relação ao segundo valor(variável B).                                          |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int a, b, calculo;
    
    printf("Primeiro valor(inteiro): ");
    scanf("%i", &a);
    printf("Segundo valor(inteiro): ");
    scanf("%i", &b);

    calculo = pow((a - b), 2);

    printf("A diferença de %i e %i elevado ao quadrado é igual a %i.\n", a, b, calculo);
    
    return 0;
}
