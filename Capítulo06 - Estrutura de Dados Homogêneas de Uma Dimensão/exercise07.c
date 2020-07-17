//Date: February, 2020
//Author: Gabrielgscript;

/*
|Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma matriz C que seja a jun-|
|ção das duas outras matrizes. Desta forma, C deve ter a capacidade de armazenar 50 elementos. Apresentar a matriz C.  |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[20], B[30], C[50];

    for (int i = 0; i < 20; i++)
    {
        printf("%iº para a matriz A: ", i + 1);
        scanf("%i", &A[i]);
    }
    
    printf("\n");
    
    for (int j = 0; j < 30; j++)
    {
        printf("%iº para a matriz B: ", j + 1);
        scanf("%i", &B[j]);
    }
    
    for (int k = 0; k < 50; k++)
    {
        if (k < 20)
        {
            C[k] = A[k];
        }
        else
        {
            C[k] = B[k -20];
        }       
        printf("C[%i] = %i\n", k, C[k]);
    }
}
