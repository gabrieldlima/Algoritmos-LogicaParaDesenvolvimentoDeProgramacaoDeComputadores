//Date: February, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia uma matriz A de uma dimensão com 15 elementos   |
|numéricos inteiros.Apresentar o total de elementos pares existentes na matriz.|
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[15];
    int countEven = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("%iº número inteiro para matriz A: ", i + 1);
        scanf("%i", &A[i]);
        
        if (A[i] % 2 == 0)
        {
            countEven++;
        }
    }
    
    printf("O total de números pares lido foi de %i.\n", countEven);
}
