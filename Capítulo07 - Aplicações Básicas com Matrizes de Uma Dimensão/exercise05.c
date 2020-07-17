//Date: February, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia duas matrizes A e B do tipo vetor com elementos |
|do tipo cadeia, senda a matriz A com 20 elementos e a matriz B com 30 elemen- |
|tos. Construir uma matriz C, sendo esta a junção das matrizes A e B. Desta    |
|forma, a matriz C deve ter a capacidade de armazenar 50 elementos. Apresentar |
|os elementos da matriz C em ordem descendente.                                |
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char A[30][30], B[30][30], C[50][30];
    char temp[30];

    // Read 20 names in array A
    for (int i = 0; i < 20; i++)
    {
        printf("Enter a %dº name for array A: ", i + 1);
        fgets(A[i], sizeof(A), stdin);
    }

    // Read 30 names in array B
    for (int i = 0; i < 30; i++)
    {
        printf("Enter a %dº name for array B: ", i + 1);
        fgets(B[i], sizeof(B), stdin);
    }

    // Read the names of arrays A and B in array C
    for (int i = 0; i < 50; i++)
    {
        if (i < 20)
        {
            strcpy(C[i], A[i]);
        }
        else
        {
            strcpy(C[i], B[i - 20]);
        }
    }

    // Sort the C array in descending order
    for (int i = 0; i < 50; i++)
    {
        for (int j = i + 1; j < 50; j++)
        {
            if (C[i] < C[j])
            {
                strcpy(temp, C[i]);
                strcpy(C[i], C[j]);
                strcpy(C[j], temp);
            }
        }
    }

    // Show the elements of the C array on the screen
    printf("\nArray C:\n");
    for (int i = 0; i < 50; i++)
    {
        printf("%iº » %s", i + 1, C[i]);
    }
    
    return 0;
}
