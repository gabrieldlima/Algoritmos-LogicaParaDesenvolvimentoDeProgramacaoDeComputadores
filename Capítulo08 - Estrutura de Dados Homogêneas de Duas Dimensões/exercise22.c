//Date: June, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que faça a leitura de duas matrizes A e B de duas dimen- |
|sões com cinco linhas e cinco colunas. A matriz A deve ser formada por valores|
|que não seja divisíveis por 3, enquanto a matriz B deve ser formada por valo- |
|res que não sejam divisíveis por 6. As entradas dos valores nas matrizes devem|
|ser validadas pelo programa e não pelo usuário. Construir e apresentar a ma-  |
|triz C de mesma dimensão e números de elementos que contenha a soma dos ele-  |
|mentos das matrizes A e B.                                                    |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5][5], B[5][5], C[5][5];

    for (int i = 0; i < 5; i ++)
    {
        for (int j = 0; j < 5; j++)
        {
            do 
            {
                printf("Numbers not divisible by 3 for A[%d][%d]: ", i, j);
                scanf("%d", &A[i][j]);

                if (A[i][j] % 3 == 0)
                {
                    printf("%d IS DIVISIBLE by 3.\n", A[i][j]);
                }   
            }
            while (A[i][j] % 3 == 0);
            
            do 
            {
                printf("Numbers not divisible by 6 for B[%d][%d]: ", i, j);
                scanf("%d", &B[i][j]);

                if (B[i][j] % 6 == 0)
                {
                    printf("%d IS DIVISIBLE by 6.\n", B[i][j]);
                }
            }
            while (B[i][j] % 6 == 0);
        }

        system("clear");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
