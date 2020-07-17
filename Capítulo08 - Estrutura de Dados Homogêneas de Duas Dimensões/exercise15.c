//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com |
|oito linhas e seis colunas. Contruir uma matriz B de uma dimensão que seja    |
|formada pela soma de cada linhas da matriz A. Ao final apresentar o somatório |
|dos elementos da matriz B.                                                    |
*/

#include <stdio.h>

int main(void)
{
    int A[8][6];
    int B[8];
    int sum;

    // Input 
    for (int i = 0; i < 8; i++)
    {
        sum = 0;

        for (int j = 0; j < 6; j++)
        {
            printf("Enter a integer for array A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            
            sum += A[i][j];
        }

        B[i] = sum;
    }

    // Output
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
