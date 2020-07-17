//Date: March, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia duas matrizes A e B de uma dimensão do tipo ve- |
|tor com dez elementos inteiros cada. Construir uma matriz C de mesmo tipo e   |
|dimensão, que seja formada pela soma dos quadrados de cada elemento correspon-|
|dente das matrizes A e B. Apresentar a matriz C em ordem descrescente.        |
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int A[10], B[10], C[10];
    int temp = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%dº number for array A: ", i + 1);
        scanf("%d", &A[i]);
        printf("%dº number for array B: ", i + 1);
        scanf("%d", &B[i]);
        printf("\n");
        C[i] = pow(A[i], 2) + pow(B[i], 2);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (C[i] < C[j])
            {
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    printf("Array C:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("C[%d] »»» %d\n", i, C[i]);
    }

    return 0;
}
