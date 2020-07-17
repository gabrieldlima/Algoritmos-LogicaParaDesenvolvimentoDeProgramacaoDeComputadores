//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensão com |
|quatro elementos. Construir a matriz E de duas dimensões do tipo 4x4, sendo a |
|primeira linha formada pelo dobro dos valores dos elementos da matriz A, a se-|
|gunda linha formada pelo triplo dos valores dos elementos da matriz B, a ter- |
|ceira pelo quádruplo dos valores dos elementos da matriz C e a quarta linhas  |
|formada pelo fatorial dos valores dos elementos da matriz D. Apresentar a ma- |
|triz E.                                                                       |
*/

#include <stdio.h>

int fac(int num);

int main(void)
{
    int A[4], B[4], C[4], D[4];
    int E[4][4];

    for (int i = 0; i < 4; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
        printf("C[%d]: ", i);
        scanf("%d", &C[i]);
        printf("D[%d]: ", i);
        scanf("%d", &D[i]);
        printf("\n");
    }


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0)
            {
                E[i][j] = A[j] * 2;
            }
            else if (i == 1)
            {
                E[i][j] = B[j] * 3;
            }
            else if (i == 2)
            {
                E[i][j] = C[j] * 4;
            }
            else
            {
                E[i][j] = fac(D[j]);
            }
        }
    }

    for (int rows = 0; rows < 4; rows++)
    {
        for (int columns = 0; columns < 4; columns++)
        {
            printf("%d ", E[rows][columns]);
        }
        printf("\n");
    }

    return 0;
}

int fac(int num)
{
    int result = 1;

    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }

    return result;
}
