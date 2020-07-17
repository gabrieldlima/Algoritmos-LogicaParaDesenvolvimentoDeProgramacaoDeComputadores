//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia um matriz A do tipo vetor com dez elementos in- |
|teiros. Construir uma matriz B de mesmo tipo, em que cada elemento deve ser a |
|metade exata de cada um dos elementos existentes na matriz A. Apresentar os   |
|elementos da matriz A e B.                                                    |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10];
    float B[10];

    for (int i = 0; i < 10; i++)
    {
        printf("%iº número inteiro para a matriz A: ", i + 1);
        scanf("%i", &A[i]);
    }
    
    for (int j = 0; j < 10; j++)
    {
        B[j] = A[j] / (float) 2;
        printf("B[%i] = %.1f\n", j, B[j]);
    }
}
