//Date: February, 2020
//Author: Gabrielgscript;

/*
|Construir um programa que leia 15 elementos numéricos inteiros em uma matriz A|
|de uma dimensão do tipo vetor. Construir uma matriz B de mesmo tipo e dimensão|
|em que cada elemento seja o fatorial do elemento correspondente armazenado na |
|matriz A. Apresentar os elementos da matriz B ordenados em ordem crescente.   |
*/

#include <stdio.h>

int fac(int num);

int main(void)
{
    int A[15], B[15];
    int temp = 0;

    // Read 15 numbers in array A
    for (int i = 0; i < 15; i++)
    {
        printf("Type a %iº number: ", i + 1);
        scanf("%i", &A[i]);
    }

    // Read the factorial numbers of array A in array B
    for (int i = 0; i < 15; i++)
    {
        B[i] = fac(A[i]);
    }

    // Sort array B in ascending order
    for (int i = 0; i < 15; i++)
    {
        for (int j = i + 1; j < 15; j++)
        {
            if (B[i] > B[j])
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    // Show numbers of the array B
    for (int i = 0; i < 15; i++)
    {
        printf("%i\n", B[i]);
    }

    return 0;
}

int fac(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    
    return factorial;
}
