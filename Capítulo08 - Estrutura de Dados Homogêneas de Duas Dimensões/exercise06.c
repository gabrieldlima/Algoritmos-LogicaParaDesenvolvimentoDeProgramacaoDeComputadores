//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas |
|e quatro colunas. Construir uma matriz B de mesma dimensão, em que cada ele-  |
|mento seja o fatorial de cada elemento correspondente armazenado na matriz A. |
|Apresentar ao final as matrizes A e B.                                        |
*/

#include <stdio.h>

int factorial(int num);

int main(void)
{
    int A[5][4], B[5][4];

    // Input 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter a integer for array A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Processing
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B[i][j] = factorial(A[i][j]);
        }
    }

    // Output
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
        for (int k = 0; k < 4; k++)
        {
            printf("B[%d][%d] = %d\n", i, k, B[i][k]);
        }
        printf("\n");
    }

    return 0;
}

int factorial(int num)
{
    int result = 1;

    for (int i = num; i > 0; i--)
    {
        result *= i;
    }

    return result;
}
