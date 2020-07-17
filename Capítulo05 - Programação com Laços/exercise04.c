//Date: January, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que apresente o somatório dos valores pares existentes na faixa de 1 até 500.                    |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0, sum = 0;

    for (i = 1; i <= 500; i++) {

        if (i % 2 == 0) {

            sum += i;

        }

    }

    printf("A soma de todos os valores pares entre 1 e 500 é: %d.\n", sum);

    return 0;
}
