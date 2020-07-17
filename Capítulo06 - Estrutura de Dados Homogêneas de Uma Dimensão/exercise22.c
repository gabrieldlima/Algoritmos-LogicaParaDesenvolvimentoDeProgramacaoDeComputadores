//Date: February, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que leia uma matriz A de uma dimensão do tipo vetor com |
|30 elementos do tipo inteiro. Ao final do programa, apresentar a quantidade de|
|valores pares e ímpares existentes na referida matriz.                        |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[30];
    int countEven = 0, countOdd = 0;

    for (int i = 0; i < 30; i++)
    {
        printf("Digite um %iº número inteiro qualquer: ", i + 1);
        scanf("%i", &A[i]);

        if (A[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    
    printf("Ao todo foram lidos: %i pares e %i ímpares\n", countEven, countOdd);
}
