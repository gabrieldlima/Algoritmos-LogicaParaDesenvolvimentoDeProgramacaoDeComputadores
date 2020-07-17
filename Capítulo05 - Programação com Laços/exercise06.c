//Date: January, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que apresente todos os valores numéricos divisíveis por 4 e menores que 200. Sugestão: a variá- |
|riavel que controla o laço deve ser iniciada com valor 1.                                                             |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 1;

    printf("Números divisíveis por 4 até 200:\n");

    for (i; i <= 200; i++) {

        if (i % 4 == 0) {

            printf("%d\n", i);

        }

    }

    return 0;
}
