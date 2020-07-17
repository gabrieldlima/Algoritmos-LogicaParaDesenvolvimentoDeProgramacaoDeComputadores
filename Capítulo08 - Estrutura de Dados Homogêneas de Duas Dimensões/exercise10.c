//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia um matriz A de duas dimensões com seis linhas e |
|cinco colunas. Construir a matriz B de mesma dimensão, que deve ser formada do|
|seguinte modo: para cada elemento par da matriz A deve ser somado 5 e de cada |
|elemento ímpar da matriz A deve ser subtraído 4. Apresentar ao final as matri-|
|zes A e B.                                                                    |
*/

#include <stdio.h>

int main(void)
{
    int A[6][5], B[6][5];

    // Input
    for (int rows = 0; rows < 6; rows++)
    {
        for (int columns = 0; columns < 5; columns++)
        {
            printf("Enter a integer for array A[%d][%d]: ", rows, columns);
            scanf("%d", &A[rows][columns]);
        }
    }
    
    // Processing
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i][j] % 2 == 0)
            {
                B[i][j] = A[i][j] + 5;
            }
            else
            {
                B[i][j] = A[i][j] - 4;
            }
        }
    }

    // Output
    printf("\nArray A:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Array B:\n");
    for (int i = 0; i < 6; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("%d ", B[i][k]);
        }
        printf("\n");
    }

    return 0;
}
