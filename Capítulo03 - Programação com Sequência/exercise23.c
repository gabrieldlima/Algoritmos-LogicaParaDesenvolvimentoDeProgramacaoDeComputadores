//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia uma medida em pés e apresente o seu valor convertido em metros, lembrando que um pé mede|
|0,3048 metro, ou seja, um pé é igual a 30,48 centímetros.                                                             |
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float pe, metro;

    printf("CONVERSOR DE PÉS >>> METROS\n");

    printf("Pés: ");
    scanf("%f", &pe);
    
    metro = pe / 3.2808;

    printf("Metros: %.3fm\n", metro);
    
    return 0;
}
