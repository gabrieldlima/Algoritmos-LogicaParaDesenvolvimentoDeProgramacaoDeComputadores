//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 12 elementos inteiros para uma matriz A de uma  |
|dimensão do tipo vetor. Construir uma matriz B de mesmo tipo e dimensão, ob-  |
|servando a seguinte lei de formação: "todo elemento da matriz A que for ímpar |
|deve ser multiplicado por 2; caso contrário, o elemento da matriz A deve per- |
|manecer constante". Apresentar os elementos da matriaz B.                     |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[12], B[12];

    for (int i = 0; i < 12; i++)
    {
        printf("%iº número inteiro: ", i + 1);
        scanf("%i", &A[i]);
    }

    for (int j = 0; j < 12; j++)
    {
        if (A[j] % 2 != 0)
        {
            B[j] = A[j] * 2;
        }
        else
        {
            B[j] = A[j];
        }
        printf("%i\n", B[j]);
    }
}
