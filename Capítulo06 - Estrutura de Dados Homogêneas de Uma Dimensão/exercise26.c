//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos  |
|numéricos inteiros. Apresentar o total de elementos ímpares existentes na ma- |
|triz e também o percentual do valor total de números ímpares em relação à     |
|quantidade total de elementos armazenados na matriz.                          |
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[10];
    int totalOdd = 0;
    float percentage = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um %iº número inteiro qualquer: ", i + 1);
        scanf("%i", &A[i]);

        if (A[i] % 2 != 0)
        {
            totalOdd++;
        }
    }

    percentage = (totalOdd * 100) / 10;

    printf("\n» Ao todo foram lidos %i números ímpares.\n", totalOdd);
    printf("» O percentual de números ímpares lidos foi: %.1f%%\n", percentage);
}
