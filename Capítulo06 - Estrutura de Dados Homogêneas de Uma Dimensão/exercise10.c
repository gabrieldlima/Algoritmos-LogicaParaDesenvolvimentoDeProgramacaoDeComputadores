//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia uma matriz A do tipo vetor com 20 elementos inteiros. Construir uma matriz B do mesmo   |
|tipo e dimensão da matriz A, sendo cada elemento da matriz B o somatório de 1 até o valor do elemento correspondente  |
|armazenado na matriz A. Se o valor do elemento da matriz A[1] for 5, o elemento correspondente da matriz B[1] deve ser|
|15, pois o somatório do elemento da matriz A é 1+2+3+4+5. Apresentar os elementos da matriz B.                        |
*/

#include <stdio.h>
#include <stdio.h>

int somatorial(int n);

int main(void)
{
    int A[20], B[20];
    int k = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o %iº número: ", i + 1);
        scanf("%i", &A[i]);
    }

    for (int k = 0; k < 20; k++)
    {
        B[k] = somatorial(A[k]);
    }

    for (int p = 0; p < 20; p++)
    {
        printf("%i = %i\n", A[p], B[p]);
    }
}

int somatorial(int n)
{
    int result = 0;

    for (int i = 0; i <= n; i++)
    {
        result += i;
    }
    return result;
}
