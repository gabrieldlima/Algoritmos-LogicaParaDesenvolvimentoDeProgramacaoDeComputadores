//Date: May, 2020
//Author: Gabrielgscript

/*
|Elaborar um programa que leia um matriz A de duas dimensões com quatro linhas |
|e cinco colunas, armazenando nessa matriz os valores das temperaturas em graus|
|Celcius. Construir a matriz B de mesma dimensão, em que cada elemento seja o  |
|valor da temperatura em graus Fahrenheit de cada elemento correspondente da   |
|matriz A. Apresentar ao final as matrizes A e B.                              |
*/

#include <stdio.h>

int main(void)
{
    float A[4][5] = {
        {1.0, 2.0, 3.0, 4.0, 5.0},
        {6.0, 7.0, 8.0, 9.0, 10.0},
        {11.0, 12.0, 13.0, 14.0, 15.0},
        {16.0, 17.0, 18.0, 19.0, 20.0}
    };
    float B[4][5];

    // Processing
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            B[i][j] = (A[i][j] * 9 / 5) + 32;
        }
    }

    // Output
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("A[%d][%d] = %.1f°C »»» B[%d][%d] = %.1f°F\n\n",
            i, j, A[i][j], i, j, B[i][j]);
        }
    }
    
    return 0;
}
