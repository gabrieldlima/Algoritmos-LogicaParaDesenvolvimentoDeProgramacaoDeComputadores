//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia duas matrizes A e B de duas dimensões com quatro|
|linhas e cinco colunas. A matriz A deve ser formada por valores divisíveis por|
|3 e 4, enquanto a matriz B deve ser formada por valores divisíveis por 5 e 6. |
|As entradas dos valores nas matrizes devem ser validadas pelo programa e não  |
|pelo usuário. Construir e apresentar a matriz C de mesma dimensão e número de |
|elementos que contenha a o valor da multiplicação dos elementos da matriz A   |
|com os elementos correspondentes da matriz B.                                 |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[4][5], B[4][5], C[4][5];

    for (int i = 0; i < 4; i ++)
    {
        for (int j = 0; j < 5; j++)
        {
            do 
            {
                printf("Numbers divisible by 3 and 4 for A[%d][%d]: ", i, j);
                scanf("%d", &A[i][j]);

                if (A[i][j] % 3 != 0 && A[i][j] % 4 != 0)
                {
                    printf("%d IS NOT DIVISIBLE by 3 and 4.\n", A[i][j]);
                }   
            }
            while (A[i][j] % 3 != 0 && A[i][j] % 4 != 0);
            
            do 
            {
                printf("Numbers divisible by 5 and 6 for B[%d][%d]: ", i, j);
                scanf("%d", &B[i][j]);

                if (B[i][j] % 5 != 0 && B[i][j] % 6 != 0)
                {
                    printf("%d IS NOT DIVISIBLE by 5 and 6.\n", B[i][j]);
                }
            }
            while (B[i][j] % 5 != 0 && B[i][j] % 6 != 0);
        }

        system("clear");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
