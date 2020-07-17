//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão  |
|para sete elementos inteiros. Construir uma matriz C de duas dimensões, cuja  |
|primeira coluna deve ser formada pelos elementos da matriz A e a segunda colu-|
|na pelos elementos da matriz B. Apresentar a matriz C.                        |
*/

#include <stdio.h>

int main(void)
{
    int A[7], B[7];
    int C[2][7];
    
    // Input
    for (int i = 0; i < 7; i++)
    {
        printf("Enter a integer for matrix A: ");
        scanf("%d", &A[i]);
        printf("Enter a integer for matriz B: ");
        scanf("%d", &B[i]);
        printf("\n");
    }
    
    // Processing
    for (int rows = 0; rows < 2; rows++)
    {
        for (int columns = 0; columns < 7; columns++)
        {
            if (rows == 0)
            {
                C[rows][columns] = A[columns];
            }
            else
            {
                C[rows][columns] = B[columns];
            }
        }
    }

    // Output
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }

    return 0;
}
