//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente os resultados da soma e da média aritmética dos valores pares situados na faixa nu-|
|mérica de 50 até 70.                                                                                                  |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 50;
    double soma = 0, media = 0, countPar = 0;

    while (i <= 70) {

        if (i % 2 == 0) {

            soma += i;
            countPar++;

        }

        i++;

    }

    media = soma / countPar;

    printf("A soma dos %.0lf valores pares entre 50 e 70 é igual a %.0lf.\n", countPar, soma);
    printf("A média é igual a: %.2lf\n", media);

    return 0;
}
