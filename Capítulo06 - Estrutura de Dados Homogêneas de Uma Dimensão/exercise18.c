//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia seis elementos (valores inteiros) para as matri-|
|zes A e B de uma dimensão do tipo vetor. Construir as matrizes C e D de mesmo |
|tipo e dimensão. A matriz C deve ser formada pelos elemetos de índice ímpar   |
|das matrizes A e B e a matriz D deve ser formada pelos elementos de índice par|
|das matrizes A e B. Apresentar os elementos das matrizes C e D.               |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[6], B[6], C[6], D[6];

    // Ler 6 números inteiro nas matrizes A, B, C e D
    for (int i = 0; i < 6; i++)
    {
        // Leitura na matriz A
        printf("%iº número inteiro qualquer para a matriz A: ", i);
        scanf("%i", &A[i]);

        // Leitura na matriz B
        printf("%iº número inteiro qualquer para a matriz B: ", i);
        scanf("%i", &B[i]);

        // Ler na matriz D se i = par; Ler na matriz C se i = ímpar
        if (i % 2 == 0)
        {
            D[i] = A[i];
            D[i + 1] = B[i];
        }
        else
        {
            C[i - 1] = A[i];
            C[i] = B[i];
        } 
        printf("\n");
    }

    // Escrever na tela os valores das matriz C e D
    for (int j = 0; j < 12; j++)
    {
        if (j < 6)
        {
            printf("Matriz C[%i] »»» %i\n", j, C[j]);
        }
        else
        {
            printf("Matriz D[%i] »»» %i\n", j - 6, D[j - 6]);
        }
    }
}
