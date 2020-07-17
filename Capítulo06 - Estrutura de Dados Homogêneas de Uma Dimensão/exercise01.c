//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que efetue a leitura de dez nomes de pessoas em uma matriz A do tipo vetor e apresente-os em se- |
|guida.                                                                                                                |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char nomes[10][25];
    int i = 0, k = 0;

    for (i; i < 10; i++) {

        printf("%dº Nome: ", i + 1);
        fgets(nomes[i], sizeof(nomes), stdin);

    }

    printf("\nNomes digitados:\n");

    for (k; k < 10; k++) {

        printf("→ %s", nomes[k]);

    }

    return 0;
}
