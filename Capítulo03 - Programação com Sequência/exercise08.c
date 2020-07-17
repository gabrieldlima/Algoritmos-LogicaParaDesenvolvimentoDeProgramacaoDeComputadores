//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular, utilizando a formula:|
|VOLUME <-- COMPRIMENTO * LARGURA * ALTURA.                                                                   |
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float comprimento, largura, altura, volume;

    printf("VOLUME DE UM RENTÂNGULO\n");

    printf("Comprimento(m): ");
    scanf("%f", &comprimento);
    printf("Largura(m):");
    scanf("%f", &largura);
    printf("Altura(m): ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("Volume: %.2fcm³\n", volume);

    return 0;
}
