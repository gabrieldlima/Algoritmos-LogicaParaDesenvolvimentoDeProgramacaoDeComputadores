//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões |
|com cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores |
|pares, enquanto a matriz B deve aceitar a entrada de valores ímpares. As en-  |
|tradas dos valores nas matrizes A e B devem ser validada pelo programa e não  |
|pelo usuário. Construir a matriz C de mesma dimensão, que seja formada pela   |
|soma dos elementos da matriz A com os elementos da matriz B. Apresentar a ma- |
|triz C.                                                                       |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5][6], B[5][6], C[5][6];
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {   
            do
            {
                printf("Enter a even for array A[%d][%d]: ", i, j, A[i][j]);
                scanf("%d", &A[i][j]);

                if (A[i][j] % 2 == 1)
                {
                    printf("INVALID! Enter only even numbers.\n");
                }                
            }
            while (A[i][j] % 2 == 1);

            do
            {
                printf("Enter a odd for array B[%d][%d]: ", i, j, B[i][j]);
                scanf("%d", &B[i][j]);

                if (B[i][j] % 2 == 0)
                {
                    printf("INVALID! Enter only odd numbers.\n");
                }  
            }
            while (B[i][j] % 2 == 0);
        }
        
        system("clear");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
