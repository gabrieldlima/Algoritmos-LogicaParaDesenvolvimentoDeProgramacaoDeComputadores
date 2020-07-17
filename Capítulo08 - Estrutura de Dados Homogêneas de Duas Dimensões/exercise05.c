//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão  |
|para 12 elementos reais. Costruir uma matriz C de duas dimensões, sendo a pri-|
|meira coluna da matriz C formada pelos elementos da matriz A multiplicados por|
|2 e a segunda coluna formada pelos elementos da matriz B subtraídos por 5. A- |
|presentar separadamente as matrizes.                                          |
*/

#include <stdio.h>

int main(void)
{
    float A[12], B[12];
    float C[2][12];

    // Input 
    for (int i = 0; i < 12; i++)
    {
        printf("Enter a float for array A: ");
        scanf("%f", &A[i]);
        printf("Enter a float for array B: ");
        scanf("%f", &B[i]);
        printf("\n");
    }

    // Processing
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (i == 0)
            {
                C[i][j] = A[j] * 5;
            }
            else
            {
                C[i][j] = (B[j] - 5);
            }
        }
    }    

    // Output
    for (int rows = 0; rows < 2; rows++)
    {
        printf("C[%d] = ", rows);
        for (int columns = 0; columns < 12; columns++)
        {
            printf("%.2f ", C[rows][columns]);
        }
        printf("\n");
    }

    return 0;
}
