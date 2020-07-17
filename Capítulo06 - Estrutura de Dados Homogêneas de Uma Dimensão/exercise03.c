//Date: February, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia duas matrizes (denominadas A e B) do tipo vetor com 20 elementos reais. Construir uma   |
|matriz C, sendo cada elemento da matriz C a subtração de um elemento correspondente da matriz A com um elemento cor-  |
|respondente da matriz B, ou seja, a operação de processamento deve estar baseada na operação C[i] ← A[i] - B[i]. Ao   |
|final, apresentar os elementos da matriz C.                                                                           |
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    double A[20], B[20], C[20];
    int i, i2, i3, i4;

    for (i = 0; i < 20; i++) {

        printf("%dº valor: ", i + 1);
        scanf("%lf", &A[i]);

    }

    printf("\n");

    for (i2 = 0; i2 < 20; i2++) {

        printf("%dº valor: ", i2 + 1);
        scanf("%lf", &B[i2]);

    }

    printf("\n");

    for (i3 = 0; i3 < 20; i3++) {

        C[i3] = A[i3] - B[i3];

    }

    for (i4 = 0; i4 < 20; i4++) {

        printf("%.1lf - %.1lf = %.1lf\n", A[i4], B[i4], C[i4]);

    }
    
    return 0;
}
