//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos  |
|inteiros. Construir uma matriz C de duas dimensões com três colunas, sendo a  |
|primeira coluna da matriz C formada pelos elementos da matriz A somados com 5,|
|a segunda coluna seja formada pelo valor do cálculo da fatorial de cada um dos|
|elementos da matriz A, e a terceira e última coluna pelos quadrados dos ele-  |
|mentos correspondentes da matriz A. Apresentar a matriz C.                    |
*/

#include <stdio.h>
#include <math.h>

int factorial(int num);

int main(void)
{
    int A[10];
    int C[3][10];

    // Input
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a integer for array A: ");
        scanf("%d", &A[i]);
    }

    // Processing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                C[i][j] = A[j] + 5;
            }
            else if (i == 1)
            {
                C[i][j] = factorial(A[j]);
            }
            else
            {
                C[i][j] = pow(A[j], 2);
            }
        }
    }

    // Output
    for (int rows = 0; rows < 3; rows++)
    {
        printf("C[%d] = ", rows);
        for (int columns = 0; columns < 10; columns++)
        {
            printf("%d ", C[rows][columns]);
        }
        printf("\n");
    }

    return 0;
}

int factorial(int num)
{
    int result = 1;

    for (int i = num; i > 0; i--)
    {
        result *= i;
    }

    return result;
}
