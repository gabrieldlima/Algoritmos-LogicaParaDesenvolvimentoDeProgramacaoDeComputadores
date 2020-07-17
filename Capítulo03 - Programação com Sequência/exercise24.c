//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que calcule um raiz de base qualquer com índice qualquer.|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float base, indice, raiz;

    printf("CALCULO DE RAIZ COM INDICE\n");

    printf("Base: ");
    scanf("%f", &base);
    printf("Índice: ");
    scanf("%f", &indice);

    raiz = pow(base, 1.0/indice);

    printf("Raíz: %.2f\n", raiz);

    return 0;
}
