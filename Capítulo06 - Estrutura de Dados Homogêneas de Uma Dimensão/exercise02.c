//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia oito elementos inteiros em uma matriz A do tipo vetor. Construir um matriz B de mesma   |
|dimensão com os elementos da matriz A multiplicados por 3. O elemento B[1] deve ser implicado pelo elemento A[1] * 3, |
|m o elemento B[2] implicado pelo elemento A[2] * 3 e assim por diante, até 8. Apresentar a matriz B.                  |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int A[8], B[8];
    int i = 0, i2 = 0, i3 = 0;

    for (i; i < 8; i++) {

        printf("Digite um %dº valor: ", i + 1);
        scanf("%d", &A[i]);

    }
    
    for (i2; i2 < 8; i2++) {

        B[i2] = A[i2] * 3;

    }

    for (i3; i3 < 8; i3++) {

        printf("%d * 3 = %d\n",A[i3], B[i3]);

    }
    
    return 0;
}
