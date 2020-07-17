//Date: February, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que leia duas matrizes A e B do tipo vetor com 15 elementos quaisquer inteiros. Construir uma   |
|matriz C, sendo está o resultado da junção da matrizes A e B. Desta forma, a matriz C, deve ter o dobro de elementos  |
|em relação às matrizes A e B, ou seja, a matriz C deve possuir 30 elementos. Apresentar a matriz C.                   |
*/

#include <stdio.h>

int main(void)
{
    int A[15], B[15], C[30];

    //Write arrays A and B:
    for (int a = 0; a < 15; a++)
    {
        printf("%iº elemento inteiro para matriz A: ", a + 1);
        scanf("%i", &A[a]);
    }
    printf("=============================================\n");

    for (int b = 0; b < 15; b++)
    {
        printf("%iº elemento inteiro para matriz B: ", b + 1);
        scanf("%i", &B[b]);
    }
    printf("=============================================\n");

    for (int c = 0; c < 30; c++)
    {
        if (c < 15)
        {
            C[c] = A[c];
        }
        else
        {
            C[c] = B[c - 15];
        }
        printf("%i ", C[c]);
    }
    printf("\n=============================================\n");
}
