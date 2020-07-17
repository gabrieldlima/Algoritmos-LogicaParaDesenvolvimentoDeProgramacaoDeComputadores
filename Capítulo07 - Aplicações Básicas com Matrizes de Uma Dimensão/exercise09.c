//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 15 elementos inteiros em uma matriz A. Construir|
|uma matriz B de mesmo tipo e tamanho, em que cada elemento da matriz B seja a |
|metade absoluta de cada elemento da matriz A. Apresentar os elementos da ma-  |
|triz A em ordem decrescente e os de B em ordem crescente.                     |
*/

#include <stdio.h>

int main(void)
{
    float A[15], B[15];
    float temp;

    // Read 15 numbers for array A
    for (int i = 0; i < 15; i++)
    {
        printf("Type a %iº number for array A: ", i + 1);
        scanf("%f", &A[i]);
    }

    // Read the entire half of numbers from array A in array B
    for (int i = 0; i < 15; i++)
    {
        B[i] = A[i] / 2;
    }

    // Sort the numbers in array A in descending order
    for (int i = 0; i < 15; i++)
    {
        for (int j = i + 1; j < 15; j++)
        {
            if (A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Sort the numbers in array B in ascending order
    for (int i = 0; i < 15; i++)
    {
        for (int j = i + 1; j < 15; j++)
        {
            if (B[i] > B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    // Display the values of array A and B on the screen
    for (int i = 0; i < 15; i++)
    {
        printf("%iº number of array A: %.1f\n", i + 1, A[i]);
        printf("%iº number of array B: %.1f\n", i + 1, B[i]);
        printf("\n");
    }
        
    return 0;
}
