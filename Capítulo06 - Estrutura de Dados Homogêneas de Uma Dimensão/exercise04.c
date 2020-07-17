//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 15 elementos inteiros de uma matriz A do tipo vetor. Construir uma matriz B de mesmo ti-|
|po, observando a seguinte lei de formação: "todo elemento da matriz B deve ser o quadrado do elemento da matriz A cor-|
|respondente". Apresentar os elementos das matrizes A e B.                                                             |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int A[15], B[15];
    int i = 0, i2 = 0, i3 = 0;

    while (i < 15) {

        printf("%dº valor inteiro: ", i + 1);
        scanf("%d", &A[i]);
        i++;

    }

    for (i2; i2 < 15; i2++) {

        B[i2] = pow(A[i2], 2);

    }

    printf("\n");

    for (i3; i3 < 15; i3++) {

        printf("%d² = %d\n", A[i3], B[i3]);

    }
    
    return 0;
}
