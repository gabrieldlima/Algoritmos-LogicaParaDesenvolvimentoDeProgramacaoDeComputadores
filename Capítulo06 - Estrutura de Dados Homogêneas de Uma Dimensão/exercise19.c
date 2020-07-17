//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia duas matrizes A e B de uma dimensão com seis e- |
|lementos. A matriz A deve aceitar apenas a entrada de valores pares, enquanto |
|a matriz B deve aceitar apenas a entrada de valores ímpares. A entrada das ma-|
|trizes deve ser validada pelo programa e não pelo usuário. Construir um matriz|
|C que seja o resultado da junção da matriz A e B, de modo que a matriz C con- |
|tenha 12 elementos. Apresentar os elementos da matriz C.                      |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[6], B[6], C[12];

    // Ler os valores na matriz A e B
    for (int i = 0; i < 12; i++)
    {
        int number = 0;
        
        // Ler apenas valores pares para a matriz A
        if (i < 6)
        {
            printf("Digite um %iº número par: ", i + 1);
            scanf("%i", &number);
            
            while (number % 2 != 0)
            {
                printf("INVÁLIDO! Digite apenas números pares: ");
                scanf("%i", &number);
            }
            
            A[i] = number;
        }

        // Ler apenas valores ímpares para a matriz B
        else
        {
            printf("Digite um %iº número ímpar: ", i - 5);
            scanf("%i", &number);

            while (number % 2 == 0)
            {
                printf("INVÁLIDO! Digite apenas números ímpares: ");
                scanf("%i", &number);
            }

            B[i - 6] = number;
        }
    }

    // Ler os valores das matrizes A e B na matriz C e apresentar a matriz C
    for (int j = 0; j < 12; j++)
    {
        if (j < 6)
        {
            C[j] = A[j];
        }
        else
        {
            C[j] = B[j - 6];
        }
        printf("C[%i] »»» %i\n", j, C[j]);
    }
}
