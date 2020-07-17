//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com |
|cinco linhas e cinco colunas. Apresentar o somatório dos elementos situados na|
|diagonal principal (posições A[1,1], A[2,2], A[3,3], A[4,4] e A[5,5]) da refe-|
|rida matriz.                                                                  |
*/

#include <stdio.h>

int main(void)
{
    float A[5][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 4.6},
        {5.7, 8.9, 1.4, 6.7, 3.1},
        {1.7, 7.9, 2.4, 9.7, 6.8},
        {5.7, 9.9, 5.4, 6.9, 7.0}
    };
    float sum = 0;

    // Processing
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                sum += A[i][j];
            }
        }
    }

    // Output 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.1f  ", A[i][j]);
        }
        printf("\n");
    }
    printf("The sum is: %.1f\n", sum);

    return 0;
}
