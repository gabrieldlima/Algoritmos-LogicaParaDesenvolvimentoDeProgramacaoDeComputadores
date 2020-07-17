//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e  |
|15 colunas. Apresentar o somatório dos elementos pares situados na diagonal   |
|principal da referida matriz.                                                 |
*/

#include <stdio.h>

int summation(int num);

int main(void)
{
    int A[15][15];

    // Input 
    for (int rows = 0; rows < 15; rows++)
    {
        for (int columns = 0; columns < 15; columns++)
        {
            printf("Enter a integer for array A[%d][%d]: ", rows, columns);
            scanf("%d", &A[rows][columns]);
        }
    }

    // Processing
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (i == j && A[i][j] % 2 == 0)
            {
                A[i][j] = summation(A[i][j]);
            }
        }
    }

    // Output
    printf("\n");
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int summation(int num)
{
    int result = 0;

    for (int i = 1; i <= num; i++)
    {
        result += i;
    }

    return result;
}
