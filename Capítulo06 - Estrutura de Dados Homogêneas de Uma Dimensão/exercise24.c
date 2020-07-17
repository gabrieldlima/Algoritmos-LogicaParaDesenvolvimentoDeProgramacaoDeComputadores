//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia um matriz A de uma dimensão com seis elementos  |
|do tipo real. Construir uma matriz B, em cada posição de índice ímpar na ma-  |
|triz B deve ser atribuída com um elemento par existente na matriz A e cada    |
|posição de índice par na matriz B deve ser atribuída com um elemento de índice|
|ímpar existente na matriz A. Apresentar os elementos das duas matrizes.       |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float A[6], B[6];

    for (int i = 0; i < 6; i++)
    {
        printf("%iº número inteiro para matriz A: ", i + 1);
        scanf("%f", &A[i]);
    }

    for (int j = 0; j < 6; j++)
    {
        if (j % 2 == 0)
        {
            B[j] = A[j + 1];
        }
        else
        {
            B[j] = A[j - 1];
        }
      
        printf("B[%i] »»» A[%i] = %.0f\n", j, j + 1, B[j]);
    }
}
