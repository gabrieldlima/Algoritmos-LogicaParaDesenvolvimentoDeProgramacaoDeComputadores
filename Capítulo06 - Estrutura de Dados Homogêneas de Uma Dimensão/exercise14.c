//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia 20 elementos (valores reais) para temperaturas  |
|graus Celsius e armazene esses valores em uma matriz A de uma dimensão. O pro-|
|grama ao final deve apresentar a menor, a maior e a média das temperaturas li-|
|das.                                                                          |
*/

#include <stdio.h>
#include <stdio.h>

int main(void)
{
    float A[20];
    float lowest = 0, bigger = 0, average = 0, counter = 0, sum = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("%iº temperatura para a matriz A: ", i + 1);
        scanf("%f", &A[i]);
        sum += A[i];
        counter++;
    }

    average = sum / counter;

    for (int j = 0; j < 20; j++)
    {
        if (j == 0)
        {
            lowest = A[j];
            bigger = A[j];
        }
        else
        {
            if (A[j] < lowest)
            {
                lowest = A[j];
            }
            if (A[j] > bigger)
            {
                bigger = A[j];
            }
        }
    }
    printf("A menor temperatura é de %.1fºC.\n", lowest);
    printf("A maior temperatura é de %.1fºC.\n", bigger);
    printf("A média de temperatura é de %.1fºC\n", average);
}
