//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 20 elementos do tipo real em uma matriz A unidimensional e construir uma matriz B de    |
|mesma dimensão com os mesmos elementos armazenados na matriz A, porém de forma invertida. Ou seja, o primeiro elemen- |
|to da matriz A passa a ser o último da matriz B, o segundo elemento da matriz A passa a ser o penúltimo da matriz B e |
|assim por diante. Apresentar os elementos das matrizes A, B.                                                          |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float A[20], B[20];

    for (int i = 0; i < 20; i++)
    {
        printf("%iº número real para a matriz A: ", i + 1);
        scanf("%f", &A[i]);
    }

    for (int j = 0; j < 20; j++)
    {
        B[j] = A[19 - j];
        printf("%.2f >>> %.2f\n", B[j], A[j]);
    }
}
