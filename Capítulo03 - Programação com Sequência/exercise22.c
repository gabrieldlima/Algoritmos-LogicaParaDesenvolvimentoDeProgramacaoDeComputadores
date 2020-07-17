//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia dois valores númericos inteiros, os quais devem representar a base e o expoente de uma |
|potência, calcule a potência e apresente o resultado obtido.                                                         |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int base, expoente, potencia;

    printf("CALCULO DE POTÊNCIA\n");

    printf("Base: ");
    scanf("%i", &base);
    printf("Expoente: ");
    scanf("%i", &expoente);

    potencia = pow(base, expoente);

    printf("Potência: %i\n", potencia);
    
    return 0;
}
