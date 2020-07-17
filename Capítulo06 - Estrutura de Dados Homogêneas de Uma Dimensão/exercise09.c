//Date: February, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia três matrizes (A, B e C) de um dimensão do tipo vetor com cinco elementos cada, que se- |
|jam do tipo real. Construir uma matriz D, sendo esta o resultado da junção das três matrizes (A, B e C). Desta forma, |
|a matriz D deve ter o triplo de elementos das matrizes A, B e C, ou seja , 15 elementos. Apresentar os elementos da   |
|matriz D.                                                                                                             |
*/

#include <stdio.h>

int main(void)
{
    float A[5], B[5], C[5], D[15];

    for (int i = 0; i < 5; i++)
    {
        printf("%iº número real para a matriz A: ", i + 1);
        scanf("%f", &A[i]);
        printf("%iº número real para a matriz B: ", i + 1);
        scanf("%f", &B[i]);
        printf("%iº número real para a matriz C: ", i + 1);
        scanf("%f", &C[i]);
        printf("\n");
    }   
    
    for (int j = 0; j < 15; j++)
    {
        if (j < 5)
        {
            D[j] = A[j];
        }
        else if (j < 10)
        {
            D[j] = B[j - 5];
        }
        else
        {
            D[j] = C[j - 10];
        }   
    }

    for (int k = 0; k < 15; k++)
    {
        printf("%f\n", D[k]);
    }
}
