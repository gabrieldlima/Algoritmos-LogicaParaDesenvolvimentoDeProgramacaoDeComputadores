//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. Construir uma matriz B de mesmo   |
|tipo, e cada elemento da matriz B deve ser o resultado da fatorial correspondente de cada elemento da matriz A. Apre- |
|sentar as matrizes A e B.                                                                                             |
*/

#include <stdio.h>
#include <stdlib.h>

int fact(int num);

int main() {

    int A[15], B[15];
    int i = 0, i2;

    for (i; i < 15; i++) {

        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &A[i]);

    }

    for (i2; i2 < 15; i2++) {

        B[i2] = fact(A[i2]);
        printf("%d! = %d\n", A[i2], B[i2]);

    }

    return 0;
}

int fact(int num) {

    int i = 1;
    int factorial = 1;

    for (i; i <= num; i++) {

        factorial *= i;
        
    }

    return factorial;

}
