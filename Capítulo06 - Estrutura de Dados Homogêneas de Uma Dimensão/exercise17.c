//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 15 elementos reais para uma matriz A de uma di- |
|mensão do tipo vetor. Construir uma matriz B de mesmo tipo e dimensão, obser- |
|vando a seguinte lei de formação: "todo elemento da matriz A que possuir índi-|
|ce par deve ter seu elemento dividido por 2; caso contrário, o elemento da ma-|
|matriz A deve ser multiplicado por 1.5". Apresentar os elementos da matriz B. |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float A[15], B[15];

    for (int i = 0; i < 15; i++)
    {
        printf("%iº número real: ", i + 1);
        scanf("%f", &A[i]);
    }

    for (int j = 0; j < 15; j++)
    {
        if (j % 2 == 0)
        {
            B[j] = A[j] / 2;
            printf("%.1f / 2 = %.1f\n", A[j], B[j]);
        }
        else
        {
            B[j] = A[j] * 1.5;
            printf("%.1f * 1.5 = %.1f\n", A[j], B[j]);
        }
    }
}
