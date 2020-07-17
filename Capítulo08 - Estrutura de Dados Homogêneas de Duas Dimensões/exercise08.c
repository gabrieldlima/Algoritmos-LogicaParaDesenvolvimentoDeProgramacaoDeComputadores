//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões  |
|com cinco linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em|
|que cada elemento seja o dobro da cada elemento correspondente da matriz A,   |
|com exceção dos valores situados na diagonal principal(posições B[1,1] B[2,2],|
|B[3,3], B[4,4], B[5,5]), os quais devem ser o triplo de cada elemento cor-    |
|respondente da matriz A. Apresentar ao final a matriz B.                      |
*/

#include <stdio.h>

int main(void)
{
    int A[5][5], B[5][5];

    // Input 
    for (int rows = 0; rows < 5; rows++)
    {
        for (int columns = 0; columns < 5; columns++)
        {
            printf("Enter a integer for array A[%d][%d]: ", rows, columns);
            scanf("%d", &A[rows][columns]);
        }
    }

    // Processing
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                B[i][j] = A[i][j] * 3;
            }
            else
            {
                B[i][j] = A[i][j] * 2;
            }   
        }
    }

    // Output
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
