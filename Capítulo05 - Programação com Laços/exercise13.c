//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia dez valores numéricos reais e apresente no final o somatória e média dos valores lidos. |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;
    double num, soma = 0, media = 0;

    do {

        printf("Digite um %dº número real: ", i);
        scanf("%lf", &num);
        soma += num;
        i++;

    } while (i <= 10);

    media = soma / 10;
    
    printf("A soma de todos os números digitados é igual a: %lf.\n", soma);
    printf("A média dos valores lidos é de %lf.\n", media);
    
    return 0;
}
