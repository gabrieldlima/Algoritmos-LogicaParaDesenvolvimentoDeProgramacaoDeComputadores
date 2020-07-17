//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia duas matrizes A e B de uma dimensão do tipo ve- |
|tor com dez elementos inteiros cada. Construir uma matriz C de mesmo tipo e   |
|dimensão que seja formada pelo quadrado da soma dos elementos correspondentes |
|nas matrizes A e B. Apresentar os elementos da matriz C.                      |
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int A[10], B[10];
    double C[10];

    for (int i = 0; i < 10; i++)
    {
        // Ler 10 números inteiros nas matrizes A e B
        printf("%iº número inteiro para matriz A: ", i + 1);
        scanf("%i", &A[i]);
        printf("%iº número inteiro para matriz B: ", i + 1);
        scanf("%i", &B[i]);

        // Ler o quadrado da soma de A e B na matriz C
        C[i] = (pow((A[i] + B[i]), 2));
        
        printf("C[%i] »»» %.0lf\n",i, C[i]);
        printf("\n");
    }
}
