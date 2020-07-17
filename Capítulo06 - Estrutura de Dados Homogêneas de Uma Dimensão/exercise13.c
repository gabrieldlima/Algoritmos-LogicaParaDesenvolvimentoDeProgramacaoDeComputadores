//Date: February, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que calcule a tabuada de um valor qualquer entre 1 e 10 |
|e armazene os resultados em uma matriz A de uma dimensão. Apresentar os ele-  |
|mentos da matriz A.                                                           |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[11];
    int number;
    
    printf("Digite um número entre 1 e 10 para ver sua tabuada: ");
    scanf("%i", &number);

    for (int i = 1; i <= 10; i++)
    {
        A[i] = number * i;
        printf("%i * %i = %i\n", number, i, A[i]);
    }
}
