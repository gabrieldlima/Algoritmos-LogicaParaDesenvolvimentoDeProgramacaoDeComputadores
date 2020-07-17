//Date: February, 2020
//Author: Gabrielgscript;

/*
|Elaborar um programa que leia duas matrizes A e B do tipo vetor com 10 elemen-|
|tos inteiros cada. Construir duas outras matrizes C e D de mesmo tipo. Cada e-|
|lemento da matriz C deve ser o somatório do elemento correspondente da matriz |
|A, e cada elemento da matriz D deve ser o fatorial do elemento correspondente |
|da matriz B. Em seguida, construir uma matriz E, que deve conter a diferença  |
|dos elementos das matrizes C e D com a soma dos elemetos das matrizes A e B.  |
|Apresentar os elementos da matriz E em ordem crescente.                       |
*/

#include <stdio.h>
#include <stdlib.h>

int summation(int num);
int factorial(int num);

int main(void)
{
    int A[10], B[10], C[10], D[10], E[20];
    int temp = 0;

    // Read 10 integers in arrays A and B
    for (int i = 0; i < 10; i++)
    {
        printf("Type a %dº integers for array A: ", i + 1);
        scanf("%d", &A[i]);
        printf("Type a %dº integers for array B: ", i + 1);
        scanf("%d", &B[i]);
        printf("\n");    
    }
    system("clear");

    // Read values of A and B in arrays C and D respectively
    for (int i = 0; i < 10; i++)
    {
        C[i] = summation(A[i]);
        D[i] = factorial(B[i]);
    }

    // Read (C - D) and (A + B) in array E
    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
        {
            E[i] = A[i] + B[i];
        }
        else
        {
            E[i] = C[i - 10] - D[i - 10];
        }
    }

    // Sort array E in ascending order
    for (int i = 0; i < 20; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (E[i] > E[j])
            {
                temp = E[i];
                E[i] = E[j];
                E[j] = temp;
            }
        }
    }

    // Show the values of array E
    printf("Array E:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("E[%d] »»» %d\n", i, E[i]);
    }

    return 0;
}

int summation(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; i++) //
    {
        sum += i;
    }
    return sum;
}

int factorial(int num)
{
    int fac = 1;
    for(int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}
