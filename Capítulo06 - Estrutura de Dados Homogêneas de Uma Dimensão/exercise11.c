//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia um matriz A do tipo vetor com dez elementos in- |
|teiros positivos. Construir uma matriz B de mesmo tipo e dimensão, em que ca- |
|da elemento da matriz B deve ser o valor negativo de elemento da matriz A.    |
|Desta forma,se em A[1] estiver armazenado o elemento 8, deve estar em B[1] o  |
|valor -8 e assim por diante. Apresentar os elementos da matriz B.             |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10], B[10];

    for (int i = 0; i < 10; i++)
    {
        printf("%iº número inteiro para a matriz A: ", i + 1);
        scanf("%d", &A[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        B[j] = A[j] * -1;
        printf("%i\n", B[j]);
    }
    printf("\n");
}
