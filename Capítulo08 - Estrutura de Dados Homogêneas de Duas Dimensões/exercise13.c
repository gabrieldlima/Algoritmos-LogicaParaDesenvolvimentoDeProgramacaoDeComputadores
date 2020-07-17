//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com |
|cinco linhas e cinco colunas. Apresentar o somatório dos elementos situados   |
|nas posições de linha e coluna ímpares da diagonal principal (A[1,1], A[3,3], |
|A[5,5]) da referida matriz.                                                   |
*/

#include <stdio.h>
#include <math.h>

float summation(float num);

int main(void)
{
    float A[5][5] = {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {6.6, 7.7, 8.8, 9.9, 4.6},
        {5.7, 8.9, 1.4, 6.7, 3.1},
        {1.7, 7.9, 2.4, 9.7, 6.8},
        {5.7, 9.9, 5.4, 6.9, 7.0}
    };

    // Processing
    for (int rows = 1; rows <= 5; rows++)
    {
        for (int columns = 1; columns <= 5; columns++)
        {
            if (rows == columns && rows % 2 != 0 && columns % 2 != 0)
            {
                A[rows][columns] = summation(A[rows][columns]);
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
    
    return 0;
}

float summation(float num)
{   
    float wholePart;
    float decimalPart;
    float result = 0;

    wholePart = floor(num);
    decimalPart = num - wholePart;

    for (int i = 1; i <= (int)wholePart; i++)
    {
        result += i;
    }

    result += decimalPart;

    return result;
}
