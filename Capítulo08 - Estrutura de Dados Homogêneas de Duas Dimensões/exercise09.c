//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões  |
|com sete linhas e sete colunas. Construir uma matriz B de mesma dimensão, em  |
|que cada elemento seja o somatório de 1 até o valor armazenado na posição da  |
|matriz A, com exceção dos valores situados nos índices ímpares da diagonal    |
|principal (B[1,1], B[3,3], B[5,5] e B[7,7]), os quais devem ser o fatorial de |
|cada elemento correspondente na matriz A. Apresentar ao final a matriz B.     |
*/

#include <stdio.h>
#include <stdlib.h>

int factorial(int number);
int summation(int number);


int main(void)
{
    int A[7][7], B[7][7];

    // Input
    for (int rows = 0; rows < 7; rows++)
    {
        for (int columns = 0; columns < 7; columns++)
        {
            printf("Enter a integer for array A[%d][%d]: ", rows, columns);
            scanf("%d", &A[rows][columns]);
        }
    }
    system("clear");

    // Processing
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if ((i == j) && i % 2 != 0 && j % 2 != 0)
            {
                B[i][j] = factorial(A[i][j]);
            }
            else
            {
                B[i][j] = summation(A[i][j]);
            }   
        }
    }

    // Output
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int factorial(int number)
{
    int result = 1; 

    for (int i = number; i > 0; i--)
    {
        result *= i;
    }

    return result;
}

int summation(int number)
{
    int result = 0;

    for (int i = 1; i <= number; i++)
    {
        result += i;
    }

    return result;
}
