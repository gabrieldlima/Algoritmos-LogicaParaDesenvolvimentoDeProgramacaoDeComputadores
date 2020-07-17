//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia 20 elementos para uma matriz qualquer, conside- |
|rando que essa matriz tenha o tamanho de quatro linhas por cinco colunas, em  |
|seguida apresentar a matriz.                                                  |
*/

#include <stdio.h>

int main(void)
{
    int A[4][5];

    // Input and Processing
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Output
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("A[%d][%d] = %d | ", i, j, A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
