//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que faça a leitura de 20 valores inteiros em uma matriz A|
|de duas dimensões com quatro linhas e cinco colunas. Contruir a matriz B de   |
|de uma dimensão para quatro elementos que seja formada pelo somatório dos ele-|
|mentos correspondentes de cada linhas da matriz A. Contruir também a matriz C |
|de uma dimensão para cinco elementos que seja formada pelo somatório dos ele- |
|mentos correspondentes de cada coluna da matriz A. Ao final o programa deve a-|
|presentar o somatório dos elementos da matriz B com o somatório dos elementos |
|da matriz C.                                                                  |
*/

#include <stdio.h>

int main(void)
{
    int A[4][5];
    int B[4];
    int C[5];
    
    int sum, step;
    int result = 0;
    
    // Input 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // Processing B
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            B[i] += A[i][j];
        }
    }

    // Processing C
    for (int i = 0; i < 5; i++)
    {
        sum = 0;

        for (int j = 0; j < 4; j++)
        {
            sum += A[j][i];
        }

        C[i] = sum;
    }

    // Processing result
    for (int i = 0; i < 4; i++)
    {
        result += B[i];
    }
    for (int i = 0; i < 5; i++)
    {
        result += C[i];
    }

    // Output
    printf("\nThe sum is: %d\n", result);

    return 0;
}
