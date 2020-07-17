//Date: February, 2020
//Author: Gabrielgscript;

/*
|Escrever um programa que leia 20 elementos (valores reais) para temperaturas  |
|em graus Celcius e armazene esses valores em uma matriz A de uma dimensão do  |
|tipo vetor. Construir uma matriz B de mesmo tipo e dimensão, em que cada ele- |
|mento da matriz B deve ser a conversão da temperatura em graus Fahrenheit do  |
|elemento correspondente da matriz A. Apresentar os elementos das matrizes A/B.|
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float A[20], B[20];

    for (int i = 0; i < 20; i++)
    {
        printf("%iº temperatura em ºC: ", i + 1);
        scanf("%f", &A[i]);
    }

    for (int j = 0; j < 20; j++)
    {
        B[j] = (9 * A[j] + 160) / 5;
        printf("%.2fºC »»» %.2fºF\n", A[j], B[j]);
    }
}
