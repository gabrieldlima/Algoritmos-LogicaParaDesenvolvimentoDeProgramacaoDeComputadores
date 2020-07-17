//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia uma matriz A com 12 elementos do tipo real. Após|
|a leitura da matriz A, colocar seus elementos em ordem crescente. Depois, fa- |
|zer a leitura de uma matriz B também com 12 elementos do tipo real e colocar  |
|os elementos em ordem crescente. Construir uma matriz C, em cada elemento seja|
|a soma do elemento correspondente das matrizes A e B. Colocar em ordem decres-|
|cente os elementos da matriz C e apresentar os seus valores.                  |
*/

#include <stdio.h>

int main(void)
{
    float A[12], B[12], C[12];
    float temp = 0;

    // Read 12 float numbers for the array A and B
    for (int i = 0; i < 12; i++)
    {
        printf("%iº float number for array A: ", i + 1);
        scanf("%f", &A[i]);
        printf("%iº float number for array B: ", i + 1);
        scanf("%f", &B[i]);
        printf("\n");
    }

    // Sort the numbers in array A in ascending order
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Sort the numbers in array B in ascending order
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (B[i] > B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    // Read the sum of A and B in array C
    for (int i = 0; i < 12; i++)
    {
        C[i] = A[i] + B[i];
    }

    // Sort the numbers in array C in descending order
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++)
        {
            if (C[i] < C[j])
            {
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    // Show the numbers of array C on screen
    printf("Array C:\n");
    for (int i = 0; i < 12; i++)
    {
        printf("»»» %.1f\n", C[i]);
    }

    return 0;
}
