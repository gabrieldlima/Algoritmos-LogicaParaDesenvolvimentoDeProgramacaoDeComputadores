//Date: March, 2020
//Author: Gabrielgscript;

/*
|Construir um pograma que leia três matrizes A, B e C de uma dimensão do tipo  |
|vetor com 10 elementos reais cada. Construir uma matriz D de mesmo tipo e di- |
|mensão que seja formada pelo cubo da soma dos elementos das correspondenters  |
|as matrizes A, B e C. Apresentar a matriz D em ordem crescente.               |
*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    float A[10], B[10], C[10], D[10];
    float temp = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%dº number for array A: ", i + 1);
        scanf("%f", &A[i]);
        printf("%dº number for array B: ", i + 1);
        scanf("%f", &B[i]);
        printf("%dº number for array C: ", i + 1);
        scanf("%f", &C[i]);
        printf("\n");
        D[i] = pow(A[i] + B[i] + C[i], 3);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (D[i] > D[j])
            {
                temp = D[i];
                D[i] = D[j];
                D[j] = temp;
            }
        }
    }

    printf("Array D:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("D[%d] »»» %.1f\n", i, D[i]);
    }

    return 0;
}
