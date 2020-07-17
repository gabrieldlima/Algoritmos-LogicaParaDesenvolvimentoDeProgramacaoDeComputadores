//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões |
|com cinco linhas e três colunas para valores inteiros. Construir uma matriz C |
|de mesmo tipo e dimensão, que seja formada pela soma dos elementos da matriz A|
|com os elemetos da matriz B. Apresentar os elementos da matriz C.             |
*/

#include <stdio.h>

int main(void)
{
    int A[5][3], B[5][3], C[5][3];

    // Input
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Array A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

        for (int k = 0; k < 3; k++)
        {
            printf("Array B[%d][%d]: ", i, k);
            scanf("%d", &B[i][k]);
        }
        
        printf("\n");
    }

    //Processing
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    //Output
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", C[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
